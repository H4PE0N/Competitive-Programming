
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

int array_integer_amount(int* array, int length,
  int number)
{
  int amount = 0;
  for(int index = 0; index < length; index++)
  {
    if(*(array + index) == number)amount = (amount + 1);
  }
  return amount;
}

int integer_hashmap_length(int** hashmap)
{
  int index = 0; while(*(*(hashmap + index) + 1) != 0)
  { index++; } return index;
}

int hashmap_keyword_exists(int** hashmap, int keyword)
{
  int length = integer_hashmap_length(hashmap);
  for(int index = 0; index < length; index++)
  {
    if(*(*(hashmap + index)) == keyword) return true;
  }
  return false;
}

int integer_keyword_index(int** hashmap, int keyword)
{
  int length = integer_hashmap_length(hashmap);
  for(int index = 0; index < length; index++)
  {
    if(*(*(hashmap + index)) == keyword) return index;
  }
  return -1;
}

int** increment_hashmap_value(int** hashmap,int keyword)
{
  int index = integer_keyword_index(hashmap, keyword);
  *(*(hashmap + index) + 1) += 1; return hashmap;
}

int** generate_hashmap_keyword(int** hashmap,int keyword)
{
  int length = integer_hashmap_length(hashmap);
  *(hashmap + length) = generate_integer_array(3);
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

int** convert_array_hashmap(int* array, int length)
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
  int length = integer_hashmap_length(hashmap);
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index++)
  {
    *(array + index) = *(*(hashmap + index) + 0);
  }
  return array;
}

int integer_hashmap_value(int** hashmap, int keyword)
{
  int index = integer_keyword_index(hashmap, keyword);
  return (index >= 0 ? *(*(hashmap + index) + 1) : -1);

}

int* integer_value_keywords(int** hashmap, int value,
  int i_length)
{
  int* keywords = generate_integer_array(i_length);
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
  int length = integer_hashmap_length(hashmap);
  return integer_value_keywords(hashmap, value, length);
}

int** delete_hashmap_keyword(int** hashmap, int length,
  int keyword)
{
  int index = integer_keyword_index(hashmap, keyword);
  hashmap = move_matrix_arrays(hashmap, length, index);
  *(hashmap + (length-1)) = allocate_array_integers(
    *(hashmap + (length-1)), 2);
  return hashmap;
}

int** reduce_hashmap_value(int** hashmap, int keyword)
{
  int index = integer_keyword_index(hashmap, keyword);
  int length = integer_hashmap_length(hashmap);
  if(*(*(hashmap + index) + 1) > 1)
  { *(*(hashmap + index) + 1) -= 1; return hashmap; }
  return delete_hashmap_keyword(hashmap,length,keyword);
}
