
#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Folder-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Folder-2/\
competitive-functions-program-2.h"

int** generate_integer_hashmap(int length)
{
  return generate_matrix_array( (length + 1), 2);
}

int array_integer_amount(int* array, int length,
  int number)
{
  int amount = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(array + index) == number) amount = amount + 1;
  }
  return amount;
}

int integer_hashmap_length(int** hashmap)
{
  int index = 0; while(*(*(hashmap + index) + 1) != 0)
  { index = index + 1; } return index;
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
  for(int index = 0; index < length; index = index + 1)
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

int** generate_hashmap_keyword(int** hashmap,
  int keyword)
{
  int length = integer_hashmap_length(hashmap);
  *(hashmap + length) = generate_integer_array(3);
  *(*(hashmap + length) + 0) = keyword;
  *(*(hashmap + length) + 1) = 1; return hashmap;
}

int** allocate_hashmap_value(int** hashmap,int keyword)
{
  if(!hashmap_keyword_exists(hashmap, keyword))
  {
    hashmap = generate_hashmap_keyword(hashmap,keyword);
  } else {
    hashmap = increment_hashmap_value(hashmap,keyword);
  }
  return hashmap;
}

int** convert_array_hashmap(int* array, int length)
{
  int** hashmap = generate_integer_hashmap(length);
  for(int index = 0; index < length; index = index + 1)
  {
    hashmap = allocate_hashmap_value(hashmap,
      *(array + index));
  }
  return hashmap;
}
