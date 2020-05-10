
/* This program contains functions that test the
functions in file competitive-functions-program-6.h */

#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

#include "../Competitive-Functions-Program-6/\
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

/* Made by Roy Hampus Fridholm */
