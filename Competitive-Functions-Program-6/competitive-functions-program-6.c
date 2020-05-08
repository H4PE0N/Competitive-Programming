
/* This program contains functions that deals with
probability and calculations about arrays. */

#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

// Function takes in current length of array;
double calculate_odd_median(int* array, int c_length)
{
  array = bubble_sort_array(array, c_length);
  return *(array + ( (c_length - 1) / 2) );
}

// Function takes in current length of array;
double calculate_even_median(int* array, int c_length)
{
  array = bubble_sort_array(array, c_length);
  double first = (double) *(array + ((c_length-2) / 2)),
  second = (double) *(array + ( c_length / 2));
  return ( ( second + first) / 2);
}

// Function takes in current length of array;
double calculate_array_median(int* array, int c_length)
{
  if(c_length % 2 != 0) // check if length is odd;
  { return calculate_odd_median(array, c_length); }
  else { return calculate_even_median(array,c_length);}
}

// Function takes in current length of array;
double calculate_array_average(int* array, int c_length)
{
  double array_total = 0;
  for(int index = 0; index < c_length; index++)
  {
    array_total += (double) *(array + index);
  }
  return (array_total / c_length);
}

// Function takes in current length of hashmap;
int calculate_common_value(int** hashmap, int c_length)
{
  int common_index = 0, changed = 0;
  for(int index = 0; index < c_length; index++)
  {
    int current = *(*(hashmap + index) + 1), common =
    *(*(hashmap + common_index) + 1);if(current>common)
    { common_index = index; changed = 1; }
  }
  if(!changed) { return -1; }
  return *(*(hashmap + common_index) + 0);
}

// Function takes in current length of array;
int calculate_array_typical(int* array, int c_length)
{
  int** hashmap=allocate_array_hashmap(array,c_length);
  int hash_length = calculate_hashmap_length(hashmap);
  return calculate_common_value(hashmap, hash_length);
}

/* Made by Roy Hampus Fridholm */
