
/*  This program contains functions that deals with
hashmaps and manipulation of them. */

#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

// Inputs: total length;
int** generate_integer_hashmap(const int t_length)
{
  return generate_matrix_array(t_length, 2);
}

// Inputs: array, total length, number;
int calculate_integer_amount(int* array, int t_length,
  int number)
{
  int amount = 0;
  for(int index = 0; index < t_length; index++)
  {
    if(*(array + index) == number) amount = (amount + 1);
  }
  return amount;
}

// Inputs: hashmap;
int calculate_hashmap_length(int** hashmap)
{
  int index = 0; while(*(*(hashmap + index) + 1) != 0)
  { index++; } return index;
}

// Inputs: hashmap, keyword;
int hashmap_keyword_exists(int** hashmap, int keyword)
{
  int length = calculate_hashmap_length(hashmap);
  for(int index = 0; index < length; index++)
  {
    if(*(*(hashmap + index)) == keyword) return true;
  }
  return false;
}

// Inputs: hashmap, keyword;
int calculate_keyword_index(int** hashmap,int keyword)
{
  int length = calculate_hashmap_length(hashmap);
  for(int index = 0; index < length; index++)
  {
    if(*(*(hashmap + index)) == keyword) return index;
  }
  return -1;
}

// Inputs: hashmap, keyword;
int** increment_hashmap_value(int** hashmap,int keyword)
{
  int index = calculate_keyword_index(hashmap, keyword);
  *(*(hashmap + index) + 1) += 1; return hashmap;
}

// Inputs: hashmap, keyword;
int** generate_hashmap_keyword(int** hashmap,int keyword)
{
  int length = calculate_hashmap_length(hashmap);
  *(*(hashmap + length) + 0) = keyword;
  *(*(hashmap + length) + 1) = 1; return hashmap;
}

// Inputs: hashmap, keyword;
int** allocate_hashmap_value(int** hashmap,int keyword)
{
  if(!hashmap_keyword_exists(hashmap, keyword))
  {
    hashmap=generate_hashmap_keyword(hashmap,keyword);
  } else {
    hashmap=increment_hashmap_value(hashmap,keyword);
  }
  return hashmap;
}

// Inputs: array, current length;
int** allocate_array_hashmap(int* array,int c_length)
{
  int** hashmap=generate_integer_hashmap(c_length+1);
  for(int index = 0; index < c_length; index++)
  {
    hashmap = allocate_hashmap_value(hashmap,
      *(array + index));
  }
  return hashmap;
}

// Inputs: hashmap;
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
