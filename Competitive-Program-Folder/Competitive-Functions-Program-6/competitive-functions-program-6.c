
#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

double calculate_odd_median(int* array, int length)
{
  array = sort_integer_array(array, length);
  return *(array + ( (length - 1) / 2) );
}

double calculate_even_median(int* array, int length)
{
  array = sort_integer_array(array, length);
  return ( *(array + ( (length - 2) / 2) ) +
  *(array + ( length / 2) ) ) / 2;
}

double calculate_array_median(int* array, int length)
{
  if(length % 2 != 0)
  { return calculate_odd_median(array, length); }
  else return calculate_even_median(array, length);
}

double calculate_array_average(int* array,int length)
{
  double array_total = 0;
  for(int index = 0; index < length; index++)
  {
    array_total += (double) *(array + index);
  }
  return (array_total / length);
}

int update_common_value(int** hashmap, int index,
  int common_value)
{
  if(*(*(hashmap + index) + 1) > common_value)
  { return *(*(hashmap + index) + 1); }
  return common_value;
}

int update_common_key(int** hashmap, int index,
  int common_value, int common_key)
{
  if(*(*(hashmap + index) + 1) > common_value)
  { return *(*(hashmap + index) + 0); }
  return common_key;
}

int calculate_common_value(int** hashmap, int length)
{
  int common_key = -1, common_value = hashmap[0][1];
  for(int index = 0; index < length; index++)
  {
    common_value = update_common_value(hashmap,
      index, common_value);
    common_key = update_common_key(hashmap,index,
      common_value, common_key);
  }
  return common_key;
}

int calculate_array_typical(int* array, int i_length)
{
  int** hashmap = allocate_array_hashmap(array,
    i_length);
  int length = calculate_hashmap_length(hashmap);
  return calculate_common_value(hashmap, length);
}
