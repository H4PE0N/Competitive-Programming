
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
  int** matrix = generate_matrix_array((length + 1), 2);
  return matrix;
}

int integer_hashmap_length(int** hashmap)
{
  int index = 0;
  while(hashmap_index_value(hashmap, index) != 0)
  { index = index + 1; } return index;
}

int hashmap_keyword_exists(int** hashmap, int keyword)
{
  int length = integer_hashmap_length(hashmap);
  for(int index = 0; index < length; index = index + 1)
  {
    if(hashmap_index_keyword(hashmap,index) == keyword)
      return true;
  }
  return false;
}

int hashmap_keyword_index(int** hashmap, int keyword)
{
  int length = integer_hashmap_length(hashmap);
  for(int index = 0; index < length; index = index + 1)
  {
    if(hashmap_index_keyword(hashmap,index) == keyword)
      return index;
  }
  return -1;
}

int** increase_hashmap_value(int** hashmap,int keyword)
{
  int index = hashmap_keyword_index(hashmap, keyword);
  *(*(hashmap + index) + 1) += 1; return hashmap;
}

int** generate_hashmap_keyword(int** hashmap,
  int keyword)
{
  int length = integer_hashmap_length(hashmap);
  *(hashmap + length) = generate_integer_array(2);
  *(*(hashmap + length) + 0) = keyword;
  *(*(hashmap + length) + 1) = 1; return hashmap;
}

int** allocate_hashmap_value(int** hashmap,int keyword)
{
  if(!hashmap_keyword_exists(hashmap, keyword))
  {
    hashmap = generate_hashmap_keyword(hashmap,keyword);
    return hashmap;
  }
  hashmap = increase_hashmap_value(hashmap,keyword);
  return hashmap;
}

int** convert_array_hashmap(int* array, int length)
{
  int** hashmap = generate_integer_hashmap(length);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    hashmap = allocate_hashmap_value(hashmap, integer);
  }
  return hashmap;
}

int* hashmap_keyword_array(int** hashmap, int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    *(array + index) = hashmap_index_keyword(hashmap,
      index);
  }
  return array;
}

int hashmap_keyword_value(int** hashmap, int keyword)
{
  int index = hashmap_keyword_index(hashmap, keyword);
  if(index >= 0) return hashmap_index_value(hashmap,
    index); return -1;
}
