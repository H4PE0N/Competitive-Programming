
#include "../library-functions-headers.h"

int hashmap_keyword_exists(int** hashmap, int length,
  int keyword)
{
  for(int index = 0; index < length; index = index + 1)
  {
    int current = hashmap_index_keyword(hashmap,index);
    if(compare_integer_variables(keyword, current))
      return true;
  }
  return false;
}

int* convert_hashmap_array(int** hashmap, int length)
{
  int total = integer_hashmap_total(hashmap, length);
  int* array = generate_integer_array(total);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = hashmap_index_keyword(hashmap,index);
    int amount = hashmap_index_value(hashmap, index);
    int a_length = integer_array_length(array);
    array = add_array_integers(array, a_length,integer,
      amount);
  }
  return array;
}

int integer_hashmap_length(int** hashmap)
{
  int length = 0;
  while(check_hashmap_array(hashmap, length) != false)
  {
    length = increase_integer_variable(length, 1);
  }
  return length;
}

int hashmap_keyword_index(int** hashmap, int length,
  int keyword)
{
  for(int index = (length - 1); index >= 0; index -= 1)
  {
    int current = hashmap_index_keyword(hashmap,index);
    if(compare_integer_variables(keyword, current))
      return index;
  }
  return length;
}

int** increase_keyword_value(int** hashmap, int length,
  int keyword)
{
  if(!hashmap_keyword_exists(hashmap, length, keyword))
  {
    return generate_hashmap_keyword(hashmap, keyword);
  }
  int value = hashmap_keyword_value(hashmap, length,
    keyword);
  return allocate_keyword_value(hashmap,length,keyword,
    value + 1);
}

int** generate_hashmap_keyword(int** hashmap,
  int keyword)
{
  int length = integer_hashmap_length(hashmap);
  hashmap = allocate_hashmap_keyword(hashmap, length,
    keyword);
  return allocate_hashmap_value(hashmap, length, 1);
}

int** increase_hashmap_value(int** hashmap, int length,
  int index)
{
  int keyword = hashmap_index_keyword(hashmap, index);
  if(!hashmap_keyword_exists(hashmap, length, keyword))
  {
    return generate_hashmap_keyword(hashmap, keyword);
  }
  int value = hashmap_index_value(hashmap, index);
  hashmap = allocate_hashmap_value(hashmap, index,
    value + 1); return hashmap;
}

int** allocate_keyword_value(int** hashmap, int length,
  int keyword, int value)
{
  int index = hashmap_keyword_index(hashmap, length,
    keyword);
  return allocate_hashmap_value(hashmap, index, value);
}

int** convert_array_hashmap(int* array, int length)
{
  int** hashmap = generate_integer_hashmap(length);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    hashmap = increase_hashmap_value(hashmap, length,
      integer);
  }
  return hashmap;
}
