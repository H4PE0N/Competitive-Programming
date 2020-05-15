
#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

int** generate_integer_hashmap(int length)
{
  return generate_matrix_array( (length + 1), 2);
}

int calculate_integer_amount(int* array, int length,
  int number)
{
  int amount = 0;
  for(int index = 0; index < length; index++)
  {
    if(*(array + index) == number)amount = (amount + 1);
  }
  return amount;
}

int calculate_hashmap_length(int** hashmap)
{
  int index = 0; while(*(*(hashmap + index) + 1) != 0)
  { index++; } return index;
}

int hashmap_keyword_exists(int** hashmap, int keyword)
{
  int length = calculate_hashmap_length(hashmap);
  for(int index = 0; index < length; index++)
  {
    if(*(*(hashmap + index)) == keyword) return true;
  }
  return false;
}

int calculate_keyword_index(int** hashmap, int keyword)
{
  int length = calculate_hashmap_length(hashmap);
  for(int index = 0; index < length; index++)
  {
    if(*(*(hashmap + index)) == keyword) return index;
  }
  return -1;
}

int** increment_hashmap_value(int** hashmap,int keyword)
{
  int index = calculate_keyword_index(hashmap, keyword);
  *(*(hashmap + index) + 1) += 1; return hashmap;
}

int** generate_hashmap_keyword(int** hashmap,int keyword)
{
  int length = calculate_hashmap_length(hashmap);
  *(*(hashmap + length) + 0) = keyword;
  *(*(hashmap + length) + 1) = 1; return hashmap;
}

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

int** allocate_array_hashmap(int* array, int length)
{
  int** hashmap = generate_integer_hashmap(length);
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
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index++)
  {
    *(array + index) = *(*(hashmap + index) + 0);
  }
  return array;
}

int integer_hashmap_value(int** hashmap, int keyword)
{
  int index = calculate_keyword_index(hashmap, keyword);
  return (index >= 0 ? *(*(hashmap + index) + 1) : -1);

}

int* integer_value_keywords(int** hashmap,int* keywords,
  int value, int i_length)
{
  for(int index = 0; index < i_length; index++)
  {
    if(*(*(hashmap + index) + 1) != value) continue;
    int length = integer_array_length(keywords);
    keywords = add_array_integer(keywords, length,
      *(*(hashmap + index) + 0));
  }
  return keywords;
}

int* integer_hashmap_keywords(int** hashmap, int value)
{
  int length = calculate_hashmap_length(hashmap);
  int* keywords = generate_integer_array(length);
  return integer_value_keywords(hashmap,keywords,value,
    length);
}
