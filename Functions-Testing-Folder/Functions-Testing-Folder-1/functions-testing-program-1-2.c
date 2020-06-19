
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

int move_array_integers_test(int* array, int length,
  int start, int* output)
{
  array = move_array_integers(array, length, start);
  return compare_integer_arrays(array, output, length);
}

int remove_array_integer_test(int* array, int length,
  int integer, int* output)
{
  array = remove_array_integer(array, length, integer);
  length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int remove_array_integers_test(int* array, int length,
  int integer, int* output)
{
  array = remove_array_integers(array, length,integer);
  length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int array_integer_amount_test(int* array, int length,
  int integer, int output)
{
  int amount = array_integer_amount(array, length,
    integer); return (amount == output);
}

int integers_range_between_test(int* array,int minimum,
  int maximum, int output)
{
  int boolean = integers_range_between(array, minimum,
    maximum);
  return (boolean == output);
}

int switch_array_integers_test(int* array, int first,
  int second, int* output)
{
  array = switch_array_integers(array, first, second);
  int length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int compare_integer_arrays_test(int* first,int* second,
  int length, int output)
{
  int boolean = compare_integer_arrays(first, second,
    length); return (boolean == output);
}

int shuffle_integer_array_test(int* array, int length,
  int* output)
{
  array = shuffle_integer_array(array, length);
  int boolean = !compare_integer_arrays(array, output,
    length);
  return boolean && compare_array_content(array,output,
    length);
}

int duplicate_integer_array_test(int* array,int length,
  int* output)
{
  array = duplicate_integer_array(array, length);
  return compare_integer_arrays(array, output, length);
}
