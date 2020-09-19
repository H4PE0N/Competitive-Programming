
#include "../library-functions-headers.h"

int** increase_index_value(int** hashmap, int index)
{
  int value = hashmap_index_value(hashmap, index);
  return allocate_index_value(hashmap,index,value + 1);
}

int** reduce_index_value(int** hashmap, int length,
  int index)
{
  if(hashmap_index_value(hashmap, index) <= 1)
  {
    return delete_hashmap_keyword(hashmap, length,
      index);
  }
  int value = hashmap_index_value(hashmap, index);
  return allocate_index_value(hashmap, index, value-1);
}

int check_hashmap_array(int** hashmap, int index)
{
  return (hashmap_index_keyword(hashmap, index) != '\0'
    && hashmap_index_value(hashmap, index) != 0);
}

int** allocate_hashmap_value(int** hashmap, int index,
  int value)
{
  return allocate_matrix_integer(hashmap, index, 1,
    value);
}

int** allocate_hashmap_keyword(int**hashmap,int index,
  int keyword)
{
  return allocate_matrix_integer(hashmap, index, 0,
    keyword);
}

int hashmap_keyword_smaller(int** hashmap, int first,
  int second)
{
  return matrix_integer_smaller(hashmap, first,second,
    0);
}

int hashmap_keyword_greater(int** hashmap, int first,
  int second)
{
  return matrix_integer_greater(hashmap, first,second,
    0);
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
