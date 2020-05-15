
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

int allocate_array_integer_test(int* i_array,
  int index, int integer, int* o_array)
{
  i_array = allocate_array_integer(i_array,index,
    integer);
  return compare_integer_arrays(i_array,o_array,
    index + 1);
}

int delete_array_integer_test(int* i_array,
  int length, int index, int* o_array)
{
  i_array = delete_array_integer(i_array, length,
    index);
  return compare_integer_arrays(i_array, o_array,
    length);
}

int allocate_array_integers_test(int* i_array,
  int length, int* o_array)
{
  i_array = allocate_array_integers(i_array,
    length);
  return compare_integer_arrays(i_array, o_array,
    length);
}

int generate_integer_array_test(int length,
  int* o_array)
{
  int* array = generate_integer_array(length);
  return compare_integer_arrays(array, o_array,
    length);
}

int integer_array_length_test(int* i_array,
  int i_length)
{
  int length = integer_array_length(i_array);
  return (length == i_length);
}

int array_contains_integer_test(int* i_array,
  int length, int integer, int boolean)
{
  int output = array_contains_integer(i_array,
    length, integer); return (output == boolean);
}

int switch_array_integers_test(int* i_array,
  int index, int* o_array)
{
  i_array = switch_array_integers(i_array, index);
  int length = integer_array_length(i_array);
  return compare_integer_arrays(i_array, o_array,
    length);
}

int sort_integer_iteration_test(int* i_array,
  int index, int* o_array)
{
  i_array = sort_integer_iteration(i_array, index);
  int length = integer_array_length(i_array);
  return compare_integer_arrays(i_array, o_array,
    length);
}

int sort_integer_array_test(int* i_array,
  int length, int* o_array)
{
  i_array = sort_integer_array(i_array, length);
  return compare_integer_arrays(i_array, o_array,
    length);
}

int add_array_integer_test(int* i_array,
  int length, int integer, int* o_array)
{
  i_array = add_array_integer(i_array, length,
    integer);
  length = integer_array_length(i_array);
  return compare_integer_arrays(i_array, o_array,
    length);
}

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
  return compare_integer_arrays(i_array, o_array,
    length);
}

int remove_array_integers_test(int* i_array,
  int length, int integer, int* o_array)
{
  i_array = remove_array_integers(i_array, length,
    integer);
  return compare_integer_arrays(i_array, o_array,
    length);
}
