
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
Library-Functions-Folder-8/\
library-functions-program-8.h"

int** sort_integer_matrix(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    int width = integer_array_length(array);
    *(matrix + index)=sort_integer_array(array, width);
  }
  return matrix;
}

int* matrix_index_array(int** matrix, int index)
{
  int* array = *(matrix + index); return array;
}

int compare_matrix_content(int** first, int** second,
  int height, int width)
{
  first = sort_integer_matrix(first, height);
  return compare_matrix_arrays(first,
    sort_integer_matrix(first, height), height, width);
}

int matrix_array_length(int** matrix, int index)
{
  int* array = matrix_index_array(matrix, index);
  return integer_array_length(array);
}

int compare_matrix_arrays(int** first, int** second,
  int height, int width)
{
  for(int index = 0; index <= height; index = index +1)
  {
    int* f_array = matrix_index_array(first, index);
    int* s_array = matrix_index_array(second, index);
    if(!compare_integer_arrays(f_array,s_array, width))
      return false;
  }
  return true;
}
