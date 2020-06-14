
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

void integer_array_stdout(int* array, int length)
{
  for(int index = 0; index < length; index = index + 1)
    printf("%d ", array_index_integer(array, index));
  printf("\n");
}

int compare_integers_content(int* first, int* second,
  int length)
{
  first = sort_integer_array(first, length);
  return compare_integer_arrays(first,
    sort_integer_array(second, length), length);
}

int* duplicate_integer_array(int* i_array, int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    array = allocate_array_integer(array, index,
      array_index_integer(i_array, index));
  }
  return array;
}

int array_index_integer(int* array, int index)
{
  int integer = *(array + index); return integer;
}

int* shuffle_integer_array(int* array, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    int random_index = generate_random_integer(0,
      length - 1);
    array = switch_array_integers(array, index,
      random_index);
  }
  return array;
}

int* generate_integer_vector(int first, int second)
{
  int* vector = generate_integer_array(2);
  vector = allocate_array_integer(vector, 0, first);
  return allocate_array_integer(vector, 1, second);
}

int integer_array_total(int* array, int length)
{
  int total = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    total = (total + array_index_integer(array,index));
  }
  return total;
}
