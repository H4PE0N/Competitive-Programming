
/* This program contains functions that test the
functions in file competitive-functions-program-3.h */

#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

// Inputs: total length, output hashmap;
int generate_integer_hashmap_test(int t_length,
  int** o_hashmap)
{
  int** hashmap = generate_integer_hashmap(t_length);
  int length = calculate_hashmap_length(hashmap);
  return compare_matrix_arrays(hashmap, o_hashmap,
    length, 2);
}

// Inputs: array, total length, number, output amount;
int calculate_integer_amount_test(int* array,int t_length,
  int number, int o_amount)
{
  int amount = calculate_integer_amount(array, t_length,
    number);
  return (amount == o_amount);
}

// Inputs: hashmap, output length;
int calculate_hashmap_length_test(int** hashmap,
  int o_length)
{
  return (calculate_hashmap_length(hashmap) == o_length);
}

// Inputs: hashmap, keyword, boolean;
int hashmap_keyword_exists_test(int** hashmap,
  int keyword, int boolean)
{
  int output = hashmap_keyword_exists(hashmap, keyword);
  return (output == boolean);
}

// Inputs: hashmap, keyword, output index;
int calculate_keyword_index_test(int** hashmap,
  int keyword, int o_index)
{
  int index = calculate_keyword_index(hashmap, keyword);
  return (index == o_index);
}

// Inputs: input hashmap, keyword, output hashmap;
int increment_hashmap_value_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap=increment_hashmap_value(i_hashmap,keyword);
  int length = calculate_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

// Inputs: input hashmap, keyword, output hashmap;
int generate_hashmap_keyword_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap = generate_hashmap_keyword(i_hashmap,
    keyword);
  int length = calculate_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

// Inputs: input hashmap, keyword, output hashmap;
int allocate_hashmap_value_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap=allocate_hashmap_value(i_hashmap,keyword);
  int length = calculate_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

// Inputs: array, current length, output hashmap;
int allocate_array_hashmap_test(int* array,
  int c_length, int** o_hashmap)
{
  int** hashmap = allocate_array_hashmap(array,
    c_length);
  int length = calculate_hashmap_length(hashmap);
  return compare_matrix_arrays(hashmap, o_hashmap,
    length, 2);
}

// Inputs: hashmap, output array;
int hashmap_keyword_array_test(int** hashmap,
  int* o_array)
{
  int* array = hashmap_keyword_array(hashmap);
  int length = calculate_array_length(array);
  return compare_integer_arrays(array, o_array,
    length);
}

/* Made by Roy Hampus Fridholm */
