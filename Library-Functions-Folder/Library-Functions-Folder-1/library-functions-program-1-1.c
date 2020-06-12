
#include <stdlib.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int* allocate_array_integer(int* array, int index,
  int integer)
{
  *(array + index) = integer; return array;
}

int* allocate_array_integers(int* array, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    array = allocate_array_integer(array, index, '\0');
  }
  return array;
}

int* generate_integer_array(int length)
{
  int* array = malloc(sizeof(array) * (length + 1));
  return allocate_array_integers(array, length + 1);
}

int integer_array_length(int* array)
{
  int length = 0;
  while(array_index_integer(array, length) != '\0')
  { length  = (length + 1); } return length;
}

int array_contains_integer(int* array, int length,
  int integer)
{
  for(int index = 0; index < length; index = index + 1)
  {
    if(array_index_integer(array, index) == integer)
      return true;
  }
  return false;
}

int* switch_adjacent_integers(int* array, int index)
{
  return switch_array_integers(array,index, index + 1);
}

int* sort_integer_iteration(int* array,int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(*(array + index) <= *(array + index + 1))
      continue;
    array = switch_adjacent_integers(array, index);
  }
  return array;
}

int* sort_integer_array(int* array, int length)
{
  for(int index = length; index >= 0; index = index -1)
  {
    array = sort_integer_iteration(array, index);
  }
  return array;
}

int* add_array_integer(int* array, int length,
  int integer)
{
  array = allocate_array_integer(array, length,
    integer);
  return allocate_array_integer(array, (length + 1),
    '\0');
}

int* move_array_integers(int* array, int length,
  int start)
{
  for(int index = start; index < (length - 1); index++)
  {
    array = switch_adjacent_integers(array, index);
  }
  return array;
}

int* delete_array_integer(int* array, int length,
  int index)
{
  array = move_array_integers(array, length, index);
  return allocate_array_integer(array,length - 1,'\0');
}
