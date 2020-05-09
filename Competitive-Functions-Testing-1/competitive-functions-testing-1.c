
/* This program contains functions that test the
functions in file competitive-functions-program-1.h */

#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

// Inputs: i array, index, number, o array;
int allocate_array_value_test(int* i_array, int index,
  int number, int* o_array)
{
  i_array = allocate_array_value(i_array,index,number);
  int length = calculate_array_length(i_array);
  return compare_integer_arrays(i_array,o_array,length);
}

// Inputs: i array, total length, index, o array;
int delete_array_value_test(int* i_array, int t_length,
  int index, int* o_array)
{
  i_array = delete_array_value(i_array,t_length,index);
  return compare_integer_arrays(i_array,o_array,t_length);
}

// Inputs: i array, total length, o array;
int allocate_array_values_test(int* i_array,int t_length,
  int* o_array)
{
  i_array = allocate_array_values(i_array, t_length);
  return compare_integer_arrays(i_array,o_array,t_length);
}

// Inputs: total length, o array;
int generate_empty_array_test(int t_length, int* o_array)
{
  int* array = generate_empty_array(t_length);
  return compare_integer_arrays(array,o_array,t_length);
}

// Inputs: i array, length;
int calculate_array_length_test(int* i_array, int length)
{
  int o_length = calculate_array_length(i_array);
  return (o_length == length);
}

// Inputs: i array, total length, number, boolean;
int array_contains_number_test(int* i_array, int t_length,
  int number, int boolean)
{
  int output=array_contains_number(i_array, t_length,
    number); return (output == boolean);
}

// Inputs: i array, index, o array;
int switch_array_numbers_test(int* i_array, int index,
  int* o_array)
{
  i_array = switch_array_numbers(i_array, index);
  int length = calculate_array_length(i_array);
  return compare_integer_arrays(i_array,o_array,length);
}

// Inputs: i array, index, o array;
int bubble_sort_iteration_test(int* i_array, int index,
  int* o_array)
{
  i_array = bubble_sort_iteration(i_array, index);
  int length = calculate_array_length(i_array);
  return compare_integer_arrays(i_array,o_array,length);
}

// Inputs: i array, current length, o array;
int bubble_sort_array_test(int* i_array, int c_length,
  int* o_array)
{
  i_array = bubble_sort_array(i_array, c_length);
  return compare_integer_arrays(i_array,o_array,c_length);
}

// Inputs: i array, current length, number, o array;
int add_array_number_test(int* i_array, int c_length,
  int number, int* o_array)
{
  i_array = add_array_number(i_array, c_length, number);
  c_length = calculate_array_length(i_array);
  return compare_integer_arrays(i_array,o_array,c_length);
}

// Inputs: i array, current length, start, o array;
int move_array_numbers_test(int* i_array, int c_length,
  int start, int* o_array)
{
  i_array = move_array_numbers(i_array,c_length,start);
  return compare_integer_arrays(i_array,o_array,c_length);
}

// Inputs: i array, current length, number, o array;
int remove_array_number_test(int* i_array, int c_length,
  int number, int* o_array)
{
  i_array = remove_array_number(i_array,c_length,number);
  return compare_integer_arrays(i_array,o_array,c_length);
}

/* Made by Roy Hampus Fridholm */
