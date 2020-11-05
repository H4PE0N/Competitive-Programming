
#include "../library-functions-headers.h"

int** reduce_hashmap_value(int** hashmap, int length,
  int index)
{
  if(hashmap_index_value(hashmap, index) <= 1)
  {
    return delete_hashmap_keyword(hashmap, length,
      index);
  }
  int value = hashmap_index_value(hashmap, index);
  return allocate_hashmap_value(hashmap, index,
    value - 1);
}
