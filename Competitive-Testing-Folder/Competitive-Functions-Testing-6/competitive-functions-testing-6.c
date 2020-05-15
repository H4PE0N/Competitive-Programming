
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

int calculate_odd_median_test(int* array, int length,
  double median)
{
  return calculate_odd_median(array, length)==median;
}

int calculate_even_median_test(int* array, int length,
  double median)
{
  return calculate_even_median(array,length)==median;
}

int calculate_array_median_test(int* array,int length,
  double median)
{
  return calculate_array_median(array,length)==median;
}

int calculate_array_average_test(int* array,
  int length, double average)
{
  return calculate_array_average(array, length) ==
    average;
}

int update_common_value_test(int** hashmap, int index,
  int i_value, int o_value)
{
  return update_common_value(hashmap,index,i_value) ==
    o_value;
}

int update_common_key_test(int** hashmap, int index,
  int value, int i_key, int o_key)
{
  return update_common_key(hashmap, index, value,
    i_key) == o_key;
}

int calculate_common_value_test(int** hashmap,
  int length, int value)
{
  return calculate_common_value(hashmap,length)==value;
}

int calculate_array_typical_test(int* array,int length,
  int typical)
{
  return calculate_array_typical(array, length) ==
    typical;
}
