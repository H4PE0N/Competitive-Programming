
#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

// Inputs: array, current length;
double calculate_odd_median(int* array, int c_length)
{
  array = sort_integer_array(array, c_length);
  return *(array + ( (c_length - 1) / 2) );
}

// Inputs: array, current length;
double calculate_even_median(int* array, int c_length)
{
  array = sort_integer_array(array, c_length);
  double first = (double) *(array + ((c_length-2) / 2)),
  second = (double) *(array + ( c_length / 2));
  return ( ( second + first) / 2);
}

// Inputs: array, current length;
double calculate_array_median(int* array, int c_length)
{
  if(c_length % 2 != 0) // check if length is odd;
  { return calculate_odd_median(array, c_length); }
  else return calculate_even_median(array,c_length);
}

// Inputs: array, current length;
double calculate_array_average(int* array, int c_length)
{
  double array_total = 0;
  for(int index = 0; index < c_length; index++)
  {
    array_total += (double) *(array + index);
  }
  return (array_total / c_length);
}

// Inputs: hashmap, index, common value;
int change_common_value(int** hashmap, int index,
  int common_value)
{
  if(*(*(hashmap + index) + 1) > common_value)
  { return *(*(hashmap + index) + 1); }
  return common_value;
}

// Inputs: hashmap, index, common value, common key;
int change_common_key(int** hashmap, int index,
  int common_value, int common_key)
{
  if(*(*(hashmap + index) + 1) > common_value)
  { return *(*(hashmap + index) + 0); }
  return common_key;
}

// Inputs: hashmap, current length;
int calculate_common_value(int** hashmap, int c_length)
{
  int common_key = -1, common_value=*(*(hashmap+0)+1);
  for(int index = 0; index < c_length; index++)
  {
    common_value = change_common_value(hashmap, index,
      common_value);
    common_key = change_common_key(hashmap, index,
      common_value, common_key);
  }
  return common_key;
}

// Inputs: array, current length;
int calculate_array_typical(int* array, int c_length)
{
  int** hashmap = allocate_array_hashmap(array,
    c_length);
  int hash_length=calculate_hashmap_length(hashmap);
  return calculate_common_value(hashmap,hash_length);
}
