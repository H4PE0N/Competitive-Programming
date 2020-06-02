
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

void integer_array_stdout(int* array, int length)
{
  for(int index = 0; index < length; index = index+1)
  { printf("%d ", *(array + index)); } printf("\n");
}

int compare_integers_content(int* first, int* second,
  int length)
{
  first = sort_integer_array(first, length);
  return compare_integer_arrays(first,
    sort_integer_array(second, length), length);
}

int* duplicate_integer_array(int* i_array,int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index+1)
  {
    int integer = *(i_array + index);
    array = allocate_array_integer(array, index,
      integer);
  }
  return array;
}
