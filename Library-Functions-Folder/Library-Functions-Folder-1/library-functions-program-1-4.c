
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int array_integer_smaller(int* array, int first,
  int second)
{
  int integer = array_index_integer(array, first);
  return integer < array_index_integer(array, second);
}

int array_integer_index(int* array, int length,
  int integer)
{
  int integer_index = length;
  for(int index = (length - 1); index >= 0; index -= 1)
  {
    if(array_index_integer(array, index) == integer)
      { integer_index = index; break; }
  }
  return integer_index;
}
