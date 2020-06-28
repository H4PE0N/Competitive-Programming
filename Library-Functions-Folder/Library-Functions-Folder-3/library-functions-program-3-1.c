
#include <stdlib.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

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

int integer_hashmap_length(int** hashmap)
{
  int length = 0;
  while(hashmap_index_value(hashmap, length) != 0)
  {
    length = increase_integer_variable(length);
  }
  return length;
}

int hashmap_keyword_index(int** hashmap, int keyword)
{
  int length = integer_hashmap_length(hashmap);
  for(int index = 0; index < length; index = index + 1)
  {
    if(hashmap_index_keyword(hashmap,index) == keyword)
      return index;
  }
  return length;
}

int** increase_keyword_value(int** hashmap,int keyword)
{
  int value = hashmap_keyword_value(hashmap, keyword);
  hashmap = allocate_keyword_value(hashmap, keyword,
    value + 1); return hashmap;
}

int** generate_hashmap_keyword(int** hashmap,
  int keyword)
{
  int length = integer_hashmap_length(hashmap);
  hashmap = allocate_matrix_integer(hashmap, length, 0,
    keyword);
  hashmap =allocate_matrix_integer(hashmap,length,1,1);
  return hashmap;
}

int** increase_hashmap_value(int** hashmap,int keyword)
{
  if(!hashmap_keyword_exists(hashmap, keyword))
  {
    return generate_hashmap_keyword(hashmap, keyword);
  }
  return increase_keyword_value(hashmap,keyword);
}

int** allocate_keyword_value(int** hashmap,int keyword,
  int value)
{
  int index = hashmap_keyword_index(hashmap, keyword);
  return allocate_index_value(hashmap, index, value);
}

int** convert_array_hashmap(int* array, int length)
{
  int** hashmap = generate_integer_hashmap(length);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    hashmap = increase_hashmap_value(hashmap, integer);
  }
  return hashmap;
}
