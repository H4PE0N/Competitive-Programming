
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../Library-Functions-Folder-3/\
library-functions-program-3.h"

int* allocate_value_keyword(int* keywords, int index,
  int** hashmap)
{
  int length = integer_array_length(keywords);
  keywords = add_array_integer(keywords, length,
    hashmap_index_keyword(hashmap, index));
  return keywords;
}

int* integer_value_keywords(int** hashmap, int value,
  int i_length)
{
  int* keywords = generate_integer_array(i_length);
  for(int index = 0; index < i_length; index = index+1)
  {
    if(hashmap_index_value(hashmap, index) != value)
      continue;
    keywords = allocate_value_keyword(keywords, index,
      hashmap);
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
  int index = hashmap_keyword_index(hashmap, keyword);
  hashmap = move_matrix_arrays(hashmap, length, index);
  *(hashmap + (length - 1)) = allocate_array_integers(
    *(hashmap + (length - 1)), 2);
  return hashmap;
}

int** reduce_hashmap_value(int** hashmap, int keyword)
{
  int index = hashmap_keyword_index(hashmap, keyword);
  int length = integer_hashmap_length(hashmap);
  if(hashmap_index_value(hashmap, index) <= 1)
  {
    return delete_hashmap_keyword(hashmap, length,
      keyword);
  }
  *(*(hashmap + index) + 1) -= 1; return hashmap;
}

void integer_hashmap_stdout(int** hashmap, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    printf("%d -> %d\n", hashmap_index_keyword(hashmap,
      index), hashmap_index_value(hashmap, index));
  }
}

int** generate_random_hashmap(int length, int minimum,
  int maximum)
{
  int* array = generate_random_integers(length,minimum,
    maximum);
  return convert_array_hashmap(array, length);
}

int hashmap_index_value(int** hashmap, int index)
{
  int value = *(*(hashmap + index) + 1); return value;
}

int hashmap_index_keyword(int** hashmap, int index)
{
  int keyword = *(*(hashmap + index)); return keyword;
}
