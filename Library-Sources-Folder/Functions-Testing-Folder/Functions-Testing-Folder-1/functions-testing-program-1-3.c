
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

int combine_integer_arrays_test(int*first,int f_length,
  int* second, int s_length, int* output)
{
  int* combined=combine_integer_arrays(first, f_length,
    second, s_length);
  int length = integer_array_length(combined);
  return compare_integer_arrays(combined, output,
    length);
}

int increase_array_memory_test(int* array, int length,
  int increase, int* output)
{
  int* increased = increase_array_memory(array, length,
    increase);
  return compare_integer_arrays(increased, output,
    length + increase);
}

int coordinate_variable_width_test(int* coordinate,
  int output)
{
  int width = coordinate_variable_width(coordinate);
  return compare_integer_variables(width, output);
}

int coordinate_variable_height_test(int* coordinate,
  int output)
{
  int height = coordinate_variable_height(coordinate);
  return compare_integer_variables(height, output);
}

int generate_coordinate_variable_test(int width,
  int height, int* output)
{
  int* coordinate = generate_coordinate_variable(width,
    height);
  return compare_coordinate_variables(coordinate,
    output);
}
