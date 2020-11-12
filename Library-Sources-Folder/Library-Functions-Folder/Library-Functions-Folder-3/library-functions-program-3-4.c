
#include "../library-functions-headers.h"

int** reduce_hashmap_value(int** hashmap, int length,
  int index)
{
  int value = hashmap_index_value(hashmap, index);
  if(!integer_variable_greater(value, 1))
  {
    return delete_hashmap_keyword(hashmap, length,
      index);
  }
  return allocate_hashmap_value(hashmap, index,
    value - 1);
}

int** allocate_hashmap_keyword(int** hashmap,int index,
  int keyword)
{
  hashmap = allocate_matrix_integer(hashmap, index, 0,
    keyword); return hashmap;
}
