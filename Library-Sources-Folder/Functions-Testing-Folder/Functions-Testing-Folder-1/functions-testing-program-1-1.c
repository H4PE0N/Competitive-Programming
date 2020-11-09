
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int allocate_array_integer_test(int* array, int index,
  int integer, int* output)
{
  array = allocate_array_integer(array,index,integer);
  return compare_integer_arrays(array,output,index+1);
}

int delete_array_integer_test(int* array, int length,
  int index, int* output)
{
  array = delete_array_integer(array, length, index);
  return compare_integer_arrays(array,output,length);
}

int allocate_array_integers_test(int* array,int length,
  int* output)
{
  array =allocate_array_integers(array, length);
  return compare_integer_arrays(array, output, length);
}

int generate_integer_array_test(int length,int* output)
{
  int* array = generate_integer_array(length);
  return compare_integer_arrays(array, output, length);
}

int integer_array_length_test(int* array, int output)
{
  int length = integer_array_length(array);
  return compare_integer_variables(length, output);
}

int array_contains_integer_test(int* array, int length,
  int integer, int output)
{
  int boolean = array_contains_integer(array, length,
    integer);
  return compare_integer_variables(boolean, output);
}

int switch_adjacent_integers_test(int* array,int index,
  int* output)
{
  array = switch_adjacent_integers(array, index);
  int length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int sort_integer_iteration_test(int* array, int index,
  int* output)
{
  array = sort_integer_iteration(array, index);
  int length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int sort_integer_array_test(int* array, int length,
  int* output)
{
  array = sort_integer_array(array, length);
  return compare_integer_arrays(array, output, length);
}

int append_array_integer_test(int* array, int length,
  int integer, int* output)
{
  array = append_array_integer(array, length, integer);
  return compare_integer_arrays(array,output,length+1);
}

int integers_inside_array_test(int* array, int length,
  int* integers, int output)
{
  int boolean = integers_inside_array(array, length,
    integers);
  return compare_integer_variables(boolean, output);
}

int integer_array_section_test(int* array, int first,
  int second, int* output)
{
  int* section = integer_array_section(array, first,
    second);
  int length = integer_array_length(section);
  return compare_integer_arrays(section,output,length);
}

int array_integer_index_test(int* array, int length,
  int integer, int output)
{
  int index =array_integer_index(array,length,integer);
  return compare_integer_variables(index, output);
}
