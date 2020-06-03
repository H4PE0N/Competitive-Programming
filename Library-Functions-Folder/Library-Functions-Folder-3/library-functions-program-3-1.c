
#include <stdlib.h>
#include <stdbool.h>

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../Library-Functions-Folder-3/\
library-functions-program-3.h"

int** generate_integer_hashmap(int length)
{
  return generate_matrix_array( (length + 1), 2);
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

int** increase_hashmap_value(int** hashmap,int keyword)
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
    hashmap = generate_hashmap_keyword(hashmap,keyword);
  else
    hashmap = increase_hashmap_value(hashmap,keyword);
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

int* hashmap_keyword_array(int** hashmap, int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
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
