
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-6/\
competitive-functions-program-6.h"

// Inputs: array, current length, output median;
int calculate_odd_median_test(int* array, int c_length,
  double o_median)
{
  double median = calculate_odd_median(array, c_length);
  return (median == o_median);
}

// Inputs: array, current length, output median;
int calculate_even_median_test(int* array, int c_length,
  double o_median)
{
  double median = calculate_even_median(array,c_length);
  return (median == o_median);
}

// Inputs: array, current length, output median;
int calculate_array_median_test(int* array,int c_length,
  double o_median)
{
  double median=calculate_array_median(array,c_length);
  return (median == o_median);
}

// Inputs: array, current length, output average;
int calculate_array_average_test(int* array,
  int c_length, double o_average)
{
  double average = calculate_array_average(array,
    c_length);
  return (average == o_average);
}

/* Inputs: hashmap, index, common value,
output common value; */
int update_common_value_test(int** hashmap,int index,
  int common_v, int o_common)
{
  common_v = update_common_value(hashmap, index,
    common_v);
  return (common_v == o_common);
}

/* Inputs: hashmap, index, common value, common key,
output common key; */
int update_common_key_test(int** hashmap, int index,
  int common_v, int common_k, int o_common)
{
  common_k = update_common_key(hashmap, index,
    common_v, common_k);
  return (common_k == o_common);
}

// Inputs: hashmap, current length, output common;
int calculate_common_value_test(int** hashmap,
  int c_length, int o_common)
{
  int common=calculate_common_value(hashmap,c_length);
  return (common == o_common);
}

// Inputs: array, current length, output typical;
int calculate_array_typical_test(int* array,
  int c_length, int o_typical)
{
  int typical=calculate_array_typical(array,c_length);
  return (typical == o_typical);
}
