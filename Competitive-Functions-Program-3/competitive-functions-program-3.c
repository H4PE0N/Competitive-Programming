
/*  This program contains functions that deals with
hashmaps and manipulation of them. */

#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

int** generate_integer_hashmap(const int length)
{
  return generate_matrix_array(length, 2);
}

int calculate_integer_amount(int* array, int length,
  int number)
{
  int amount = 0;
  for(int index = 0; index < length; index++)
  {
    if(*(array + index) == number) { amount += 1; }
  }
  return amount;
}

int hashmap_value_exists(int** hashmap, int value)
{
  int index = 0; while(*(*(hashmap + index) + 1) != 0)
  {
    if(*(*(hashmap + index)) == value){return true;}
    index++;
  }
  return false;
}

int calculate_hashvalue_index(int** map, int value)
{
  int index = 0; while(*(*(map + index) + 1) != 0)
  {
    if(*(*(map + index)) == value) { return index; }
    index = (index + 1);
  }
  return -1;
}

int calculate_hashmap_length(int** hashmap)
{
  int index = 0; while(*(*(hashmap + index) + 1) != 0)
  { index++; } return index;
}

int** increment_hashmap_value(int** map, int value)
{
  int index = calculate_hashvalue_index(map, value);
  *(*(map + index) + 1) += 1; return map;
}

int** generate_hashmap_value(int** map, int value)
{
  int length = calculate_hashmap_length(map);
  *(*(map + length) + 0) = value;
  *(*(map + length) + 1) = 1; return map;
}

int** allocate_hashmap_value(int** map, int value)
{
  if(!hashmap_value_exists(map, value))
  {
    map = generate_hashmap_value(map, value);
  } else {
    map = increment_hashmap_value(map, value);
  }
  return map;
}

int** allocate_array_hashmap(int* array, int length)
{
  int** hashmap =generate_integer_hashmap(length+1);
  for(int index = 0; index < length; index++)
  {
    hashmap = allocate_hashmap_value(hashmap,
      *(array + index));
  }
  return hashmap;
}

int* hashmap_keyword_array(int** hashmap)
{
  int length = calculate_hashmap_length(hashmap);
  int* array = generate_empty_array(length);
  for(int index = 0; index < length; index++)
  {
    *(array + index) = *(*(hashmap + index) + 0);
  }
  return array;
}

/* Made by Roy Hampus Fridholm */
