
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

int calculate_integer_amount(int* array, int* info)
{
  int number = *(info + 0), amount = 0;
  for(int index = 0; index < *(info + 1); index++)
  {
    if(*(array + index) == number){ amount += 1; }
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

int calculate_hashvalue_index(int** list, int value)
{
  int index = 0; while(*(*(list + index) + 1) != 0)
  {
    if(*(*(list + index)) == value)
    { return index; } index = (index + 1);
  }
  return -1;
}

int calculate_hashmap_length(int** hashmap)
{
  int index = 0; while(*(*(hashmap + index) + 1) != 0)
  { index++; } return index;
}

int** increment_hashmap_value(int** list, int value)
{
  int index = calculate_hashvalue_index(list, value);
  *(*(list + index) + 1) += 1; return list;
}

int** generate_hashmap_value(int** list, int value)
{
  int length = calculate_hashmap_length(list);
  *(*(list + length) + 0) = value;
  *(*(list + length) + 1) = 1; return list;
}

int** allocate_hashmap_value(int** list, int value)
{
  if(!hashmap_value_exists(list, value))
  {
    list = generate_hashmap_value(list, value);
  } else {
    list = increment_hashmap_value(list, value);
  }
  return list;
}

int** allocate_array_hashmap(int* array, int length)
{
  int** hashmap = generate_integer_hashmap(length);
  for(int index = 0; index < length; index++)
  {
    hashmap = allocate_hashmap_value(
      hashmap, *(array + index));
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
