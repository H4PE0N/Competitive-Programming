
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

int compare_matrix_content(int** first, int** second,
  int height, int width)
{
  first = sort_integer_matrix(first, height);
  return compare_integer_matrix(first,
    sort_integer_matrix(second, height), height,width);
}

int compare_integer_matrix(int** first, int** second,
  int height, int width)
{
  for(int index = 0; index <= height; index =index + 1)
  {
    int* f_array = matrix_index_array(first, index);
    int* s_array = matrix_index_array(second, index);
    if(!compare_integer_arrays(f_array,s_array, width))
      return false;
  }
  return true;
}

int matrix_array_greater(int** matrix, int height,
  int first, int second)
{
  matrix = sort_matrix_arrays(matrix, height);
  int width = matrix_array_length(matrix, first);
  for(int index = 0; index < width; index = index + 1)
  {
    if(matrix_integer_smaller(matrix, first, second,
      index)) return false;
    if(matrix_integer_greater(matrix, first, second,
      index)) return true;
  }
  return false;
}

int** sort_matrix_iteration(int** matrix, int height,
  int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(!matrix_array_greater(matrix, height, index,
      index + 1)) continue;
    matrix = switch_adjacent_arrays(matrix, index);
  }
  return matrix;
}

int** sort_integer_matrix(int** matrix, int height)
{
  for(int index = height; index >= 0; index =index - 1)
  {
    matrix=sort_matrix_iteration(matrix,height, index);
  }
  return matrix;
}
