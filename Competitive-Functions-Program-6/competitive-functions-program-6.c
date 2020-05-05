
/* This program contains functions that deals with
probability and calculations about arrays. */

#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

double calculate_odd_median(int* array, int length)
{
  array = bubble_sort_array(array, length);
  return *(array + ( (length - 1) / 2) );
}

double calculate_even_median(int* array, int length)
{
  array = bubble_sort_array(array, length);
  double first = (double) *(array + ((length-2) / 2)),
  second = (double) *(array + ( length / 2));
  return ( ( second + first) / 2);
}

double calculate_array_median(int* array, int length)
{
  if(length % 2 != 0) // check if length is odd;
  { return calculate_odd_median(array, length); }
  else { return calculate_even_median(array, length); }
}

double calculate_array_average(int* array, int length)
{
  double array_total = 0;
  for(int index = 0; index < length; index++)
  {
    array_total += (double) *(array + index);
  }
  return (array_total / length);
}

int calculate_common_value(int** hashmap, int length)
{
  int common_index = 0;
  for(int index = 0; index < length; index++)
  {
    int current = *(*(hashmap + index) + 1), common =
    *(*(hashmap + common_index) + 1);
    if(current > common) { common_index = index; }
  }
  return *(*(hashmap + common_index) + 0);
}

int calculate_array_typical(int* array, int length)
{
  int** hashmap = allocate_array_hashmap(array,length);
  int hash_length = calculate_hashmap_length(hashmap);
  return calculate_common_value(hashmap, hash_length);
}

/* Made by Roy Hampus Fridholm */
