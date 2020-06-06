
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../Library-Functions-Folder-2/\
library-functions-program-2.h"

int** sort_integer_matrix(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    int width = integer_array_length(array);
    *(matrix + index) = sort_integer_array(array,
      width);
  }
  return matrix;
}

int compare_matrix_content(int** first, int** second,
  int height, int width)
{
  first = sort_integer_matrix(first, height);
  return compare_matrix_arrays(first,
    sort_integer_matrix(first, height), height, width);
}

int* matrix_index_array(int** matrix, int index)
{
  int* array = *(matrix + index); return array;
}
