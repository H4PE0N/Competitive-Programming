
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int reverse_integer_array_test(int* array, int length,
  int* output)
{
  int* reverse = reverse_integer_array(array, length);
  return compare_integer_arrays(reverse,output,length);
}

int array_index_integer_test(int* array, int index,
  int output)
{
  int integer = array_index_integer(array, index);
  return compare_integer_variables(integer, output);
}

int generate_integer_pair_test(int first, int second,
  int* output)
{
  int* pair = generate_integer_pair(first, second);
  return compare_integer_arrays(pair, output, 2);
}

int integer_array_total_test(int* array, int length,
  int output)
{
  int total = integer_array_total(array, length);
  return compare_integer_variables(total, output);
}

int compare_array_integers_test(int* array, int first,
  int second, int output)
{
  int boolean = compare_array_integers(array, first,
    second);
  return compare_integer_variables(boolean, output);
}

int compare_arrays_integer_test(int* first,int* second,
  int index, int output)
{
  int boolean = compare_arrays_integer(first, second,
    index);
  return compare_integer_variables(boolean, output);
}

int compare_array_content_test(int* first, int* second,
  int length, int output)
{
  int boolean = compare_array_content(first, second,
    length);
  return compare_integer_variables(boolean, output);
}
