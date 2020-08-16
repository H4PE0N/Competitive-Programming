
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

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
