
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

int move_array_integers_test(int* i_array,
  int length, int start, int* o_array)
{
  i_array = move_array_integers(i_array, length,
    start);
  return compare_integer_arrays(i_array, o_array,
    length);
}

int remove_array_integer_test(int* i_array,
  int length, int integer, int* o_array)
{
  i_array = remove_array_integer(i_array, length,
    integer);
  length = integer_array_length(i_array);
  return compare_integer_arrays(i_array, o_array,
    length);
}

int remove_array_integers_test(int* i_array,
  int length, int integer, int* o_array)
{
  i_array = remove_array_integers(i_array, length,
    integer);
  length = integer_array_length(i_array);
  return compare_integer_arrays(i_array, o_array,
    length);
}

int array_integer_amount_test(int* array,
  int length, int number, int i_amount)
{
  int amount = array_integer_amount(array, length,
    number); return (amount == i_amount);
}

int integers_range_between_test(int* array,
  int minimum, int maximum, int boolean)
{
  int output = integers_range_between(array,
    minimum, maximum);
  return (output == boolean);
}

int generate_random_integers_test(int length,
  int i_min, int i_max, int o_min, int o_max)
{
  int* array = generate_random_integers(length,
    i_min, i_max);
  return integers_range_between(array, o_min,
    o_max);
}
