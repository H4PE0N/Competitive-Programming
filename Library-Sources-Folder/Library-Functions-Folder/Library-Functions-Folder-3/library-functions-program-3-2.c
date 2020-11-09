
#include "../library-functions-headers.h"

int* integer_hashmap_keywords(int** hashmap, int value)
{
  int length = integer_hashmap_length(hashmap);
  return hashmap_value_keywords(hashmap, length,value);
}

int* hashmap_value_keywords(int** hashmap, int length,
  int value)
{
  int* keywords = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(hashmap_index_value(hashmap, index) != value)
      continue;
    keywords = allocate_value_keyword(keywords, index,
      hashmap);
  }
  return keywords;
}

int* allocate_value_keyword(int* keywords, int index,
  int** hashmap)
{
  int length = integer_array_length(keywords);
  int keyword = hashmap_index_keyword(hashmap, index);
  return append_array_integer(keywords,length,keyword);
}

int** delete_hashmap_keyword(int** hashmap, int length,
  int index)
{
  hashmap = move_matrix_arrays(hashmap, length, index);
  int* array = generate_integer_array(2);
  return allocate_matrix_array(hashmap, length, array);
}

int** reduce_keyword_value(int** hashmap, int length,
  int keyword)
{
  if(hashmap_keyword_value(hashmap,length, keyword)<=1)
  {
    return remove_hashmap_keyword(hashmap, length,
      keyword);
  }
  int value = hashmap_keyword_value(hashmap, length,
    keyword);
  return allocate_keyword_value(hashmap,length,keyword,
    value - 1);
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
  int* array = generate_random_array(length, minimum,
    maximum);
  return convert_array_hashmap(array, length);
}

int hashmap_index_value(int** hashmap, int index)
{
  int value = matrix_array_integer(hashmap, index, 1);
  return value;
}

int hashmap_index_keyword(int** hashmap, int index)
{
  int keyword = matrix_array_integer(hashmap,index, 0);
  return keyword;
}

int hashmap_keyword_greater(int** hashmap, int first,
  int second)
{
  int boolean = matrix_integer_greater(hashmap, first,
    second, 0); return boolean;
}

int integer_hashmap_total(int** hashmap, int length)
{
  int total = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    total = total + hashmap_index_value(hashmap,index);
  }
  return total;
}
