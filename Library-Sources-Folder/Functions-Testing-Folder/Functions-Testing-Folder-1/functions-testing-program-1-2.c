
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

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
    integer);
  return compare_integer_variables(amount, output);
}

int integers_range_between_test(int* array,int minimum,
  int maximum, int output)
{
  int boolean = integers_range_between(array, minimum,
    maximum);
  return compare_integer_variables(boolean, output);
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
    length);
  return compare_integer_variables(boolean, output);
}

int shuffle_integer_array_test(int* array, int length,
  int* output)
{
  array = shuffle_integer_array(array, length);
  int same=compare_integer_arrays(array,output,length);
  int content = compare_array_content(array, output,
    length); return (!same && content);
}

int duplicate_integer_array_test(int* array,int length,
  int* output)
{
  array = duplicate_integer_array(array, length);
  return compare_integer_arrays(array, output, length);
}

int add_array_integers_test(int* array, int length,
  int integer, int amount, int* output)
{
  array = add_array_integers(array, length, integer,
    amount);
  length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int array_integer_smaller_test(int* array, int first,
  int second, int output)
{
  int boolean = array_integer_smaller(array, first,
    second);
  return compare_integer_variables(boolean, output);
}

int array_integer_greater_test(int* array, int first,
  int second, int output)
{
  int boolean = array_integer_greater(array, first,
    second);
  return compare_integer_variables(boolean, output);
}
