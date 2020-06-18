
#include <stdlib.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int** generate_matrix_array(int height, int width)
{
  int** matrix =malloc(sizeof(*matrix) * (height + 1));
  for(int index = 0; index <= height; index =index + 1)
  {
    *(matrix + index) = generate_integer_array(width);
  }
  return matrix;
}

int** allocate_matrix_integer(int** matrix, int height,
  int width, int integer)
{
  int* array = matrix_index_array(matrix, height);
  *(matrix + height) = allocate_array_integer(array,
    width, integer); return matrix;
}

int** delete_matrix_integer(int** matrix, int height,
  int width)
{
  int* array = matrix_index_array(matrix, height);
  int length = matrix_array_length(matrix, height);
  *(matrix + height) = delete_array_integer(array,
    length, width); return matrix;
}

int integer_matrix_height(int** matrix, int width)
{
  int height = 0;
  while(matrix_array_length(matrix, height) >= width)
  {
    height = increase_integer_variable(height);
  }
  return height;
}

int matrix_contains_integer(int** matrix, int height,
  int width, int integer)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    if(array_contains_integer(array, width, integer))
      return true;
  }
  return false;
}

int matrix_array_contains(int** matrix, int index,
  int integer)
{
  int* array = matrix_index_array(matrix, index);
  int length = matrix_array_length(matrix, index);
  return array_contains_integer(array, length,integer);
}

int** remove_matrix_integer(int** matrix, int height,
  int integer)
{
  for(int index = (height - 1); index >= 0; index -= 1)
  {
    if(!matrix_array_contains(matrix, index, integer))
      continue;
    matrix[index] = remove_array_integer(matrix[index],
      matrix_array_length(matrix, index), integer);
    break;
  }
  return matrix;
}

int** add_matrix_integer(int** matrix, int height,
  int integer)
{
  int* array = matrix_index_array(matrix, height);
  int length = matrix_array_length(matrix, height);
  *(matrix + height) = add_array_integer(array, length,
    integer); return matrix;
}
