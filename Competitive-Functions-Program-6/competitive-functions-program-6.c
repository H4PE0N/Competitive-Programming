
/* This program contains functions that deals with
probability and calculations about arrays. */

#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

int calculate_array_average(int* array, const int length)
{
  int array_total = 0;
  for(int index = 0; index < length; index++)
  {
    array_total = (array_total + *(array + index));
  }
  return (array_total / length);
}

int calculate_array_median(int* array, const int length)
{
  array = bubble_sort_array(array, length);
  return *(array + (int) floor(length / 2) );
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

int calculate_array_typical(int* array, const int length)
{
  int** hashmap = allocate_array_hashmap(array,length);
  int hash_length = calculate_hashmap_length(hashmap);
  return calculate_common_value(hashmap, hash_length);
}

/* Made by Roy Hampus Fridholm */
