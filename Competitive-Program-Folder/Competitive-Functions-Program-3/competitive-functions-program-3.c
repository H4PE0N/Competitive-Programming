
#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

// Inputs: total length;
int** generate_integer_hashmap(const int t_length)
{
  return generate_matrix_array( (t_length + 1), 2);
}

// Inputs: array, total length, number;
int calculate_integer_amount(int* array, int t_length,
  int number)
{
  int amount = 0;
  for(int index = 0; index < t_length; index++)
  {
    if(*(array + index) == number)amount = (amount + 1);
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
int calculate_keyword_index(int** hashmap, int keyword)
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
int** allocate_hashmap_value(int** hashmap, int keyword)
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
int** allocate_array_hashmap(int* array, int c_length)
{
  int** hashmap = generate_integer_hashmap(c_length);
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
  int* array = generate_integer_array(c_length);
  for(int index = 0; index < length; index++)
  {
    *(array + index) = *(*(hashmap + index) + 0);
  }
  return array;
}

// Inputs: hashmap, keyword;
int integer_hashmap_value(int** hashmap, int keyword)
{
  int index = calculate_keyword_index(hashmap, keyword);
  return (index >= 0 ? *(*(hashmap + index) + 1) : -1);

}

// Inputs: hashmap, keywords, value, hashmap length;
int* integer_value_keywords(int** hashmap,int* keywords,
  int value, int h_length)
{
  for(int index = 0; index < h_length; index++)
  {
    if(*(*(hashmap + index) + 1) != value) continue;
    int length = integer_array_length(keywords);
    keywords = add_array_integer(keywords, length,
      *(*(hashmap + index) + 0));
  }
  return keywords;
}

// Inputs: hashmap, value;
int* integer_hashmap_keywords(int** hashmap, int value)
{
  int length = calculate_hashmap_length(hashmap);
  int* keywords = generate_integer_array(length);
  return integer_value_keywords(hashmap,keywords,value,
    length);
}
