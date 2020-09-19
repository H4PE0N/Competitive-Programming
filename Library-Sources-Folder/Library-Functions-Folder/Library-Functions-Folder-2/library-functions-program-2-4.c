
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../library-functions-headers.h"

int** sort_matrix_iteration(int** matrix, int height,
  int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(matrix_array_smaller(matrix, height, index,
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

int matrix_integer_greater(int** matrix, int first,
  int second, int index)
{
  int integer=matrix_array_integer(matrix,first,index);
  return integer > matrix_array_integer(matrix, second,
    index);
}

int matrix_integer_smaller(int** matrix, int first,
  int second, int index)
{
  int integer=matrix_array_integer(matrix,first,index);
  return integer < matrix_array_integer(matrix, second,
    index);
}

int matrix_array_integer(int** matrix, int height,
  int width)
{
  int* array = matrix_index_array(matrix, height);
  int integer = array_index_integer(array, width);
  return integer;
}

int matrix_array_greater(int** matrix, int height,
  int first, int second)
{
  matrix = sort_matrix_arrays(matrix, height);
  int width = matrix_array_length(matrix, 0);
  for(int index = 0; index < width; index = index + 1)
  {
    if(matrix_integer_smaller(matrix, first, second,
      index)) return false;
    if(matrix_integer_greater(matrix, first, second,
      index)) return true;
  }
  return false;
}

int matrix_array_smaller(int** matrix, int height,
  int first, int second)
{
  matrix = sort_matrix_arrays(matrix, height);
  int width = matrix_array_length(matrix, 0);
  for(int index = 0; index < width; index = index + 1)
  {
    if(matrix_integer_greater(matrix, first, second,
      index)) return false;
    if(matrix_integer_smaller(matrix, first, second,
      index)) return true;
  }
  return false;
}
