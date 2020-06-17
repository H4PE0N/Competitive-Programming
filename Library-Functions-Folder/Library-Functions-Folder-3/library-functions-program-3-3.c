
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

int* hashmap_keyword_array(int** hashmap, int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    int keyword = hashmap_index_keyword(hashmap,index);
    array=allocate_array_integer(array,index, keyword);
  }
  return array;
}

int** allocate_index_value(int** hashmap, int index,
  int value)
{
  hashmap = allocate_matrix_integer(hashmap, index, 1,
    value); return hashmap;
}

int compare_hashmap_arrays(int** first, int** second,
  int length)
{
  return compare_matrix_content(first,second,length,2);
}
