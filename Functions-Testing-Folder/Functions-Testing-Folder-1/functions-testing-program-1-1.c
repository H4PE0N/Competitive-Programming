
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

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
  return (length == output);
}

int array_contains_integer_test(int* array, int length,
  int integer, int output)
{
  int boolean = array_contains_integer(array, length,
    integer); return (boolean == output);
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

int add_array_integer_test(int* array, int length,
  int integer, int* output)
{
  array = add_array_integer(array, length, integer);
  return compare_integer_arrays(array,output,length+1);
}
