
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

/* Inputs: input array, index, integer,
output array; */
int allocate_array_integer_test(int* i_array,
  int index, int integer, int* o_array)
{
  i_array = allocate_array_integer(i_array,index,
    integer);
  int length = integer_array_length(i_array);
  return compare_integer_arrays(i_array,o_array,
    length);
}

/* Inputs: input array, total length, index,
output array; */
int delete_array_integer_test(int* i_array,
  int t_length, int index, int* o_array)
{
  i_array = delete_array_integer(i_array, t_length,
    index);
  return compare_integer_arrays(i_array, o_array,
    t_length);
}

// Inputs: input array, total length, output array;
int allocate_array_integers_test(int* i_array,
  int t_length, int* o_array)
{
  i_array = allocate_array_integers(i_array,
    t_length);
  return compare_integer_arrays(i_array, o_array,
    t_length);
}

// Inputs: total length, output array;
int generate_integer_array_test(int t_length,
  int* o_array)
{
  int* array = generate_integer_array(t_length);
  return compare_integer_arrays(array, o_array,
    t_length);
}

// Inputs: input array, length;
int integer_array_length_test(int* i_array,
  int length)
{
  int o_length = integer_array_length(i_array);
  return (o_length == length);
}

/* Inputs: input array, total length, integer,
boolean; */
int array_contains_integer_test(int* i_array,
  int t_length, int integer, int boolean)
{
  int output=array_contains_integer(i_array,
    t_length, integer); return (output == boolean);
}

// Inputs: input array, index, output array;
int switch_array_integers_test(int* i_array,
  int index, int* o_array)
{
  i_array = switch_array_integers(i_array, index);
  int length = integer_array_length(i_array);
  return compare_integer_arrays(i_array ,o_array,
    length);
}

// Inputs: input array, index, output array;
int sort_integer_iteration_test(int* i_array,
  int index, int* o_array)
{
  i_array = sort_integer_iteration(i_array, index);
  int length = integer_array_length(i_array);
  return compare_integer_arrays(i_array ,o_array,
    length);
}

/* Inputs: input array, current length,
output array; */
int sort_integer_array_test(int* i_array,
  int c_length, int* o_array)
{
  i_array = sort_integer_array(i_array, c_length);
  return compare_integer_arrays(i_array, o_array,
    c_length);
}

/* Inputs: input array, current length, integer,
output array; */
int add_array_integer_test(int* i_array,
  int c_length, int integer, int* o_array)
{
  i_array = add_array_integer(i_array, c_length,
    integer);
  c_length = integer_array_length(i_array);
  return compare_integer_arrays(i_array, o_array,
    c_length);
}

/* Inputs: input array, current length, start,
output array; */
int move_array_integers_test(int* i_array,
  int c_length, int start, int* o_array)
{
  i_array = move_array_integers(i_array,c_length,
    start);
  return compare_integer_arrays(i_array,o_array,
    c_length);
}

/* Inputs: input array, current length, integer,
output array; */
int remove_array_integer_test(int* i_array,
  int c_length, int integer, int* o_array)
{
  i_array = remove_array_integer(i_array,c_length,
    integer);
  return compare_integer_arrays(i_array,o_array,
    c_length);
}

// Inputs: input array, integer, output array;
int remove_array_integers_test(int* i_array,
  int integer, int* o_array)
{
  i_array = remove_array_integers(i_array,
    integer);
  int c_length = integer_array_length(i_array);
  return compare_integer_arrays(i_array, o_array,
    c_length);
}
