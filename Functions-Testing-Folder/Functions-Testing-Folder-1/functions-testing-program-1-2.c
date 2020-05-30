
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../Functions-Testing-Folder-1/\
functions-testing-program-1.h"

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
