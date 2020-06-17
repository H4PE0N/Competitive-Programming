
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

int** sort_matrix_arrays(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    int width = integer_array_length(array);
    *(matrix + index)=sort_integer_array(array, width);
  }
  return matrix;
}

int matrix_array_length(int** matrix, int index)
{
  int* array = matrix_index_array(matrix, index);
  return integer_array_length(array);
}

int* matrix_index_array(int** matrix, int index)
{
  int* array = *(matrix + index); return array;
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

int** allocate_matrix_array(int** matrix, int index,
  int* array)
{
  *(matrix + index) = array; return matrix;
}

int matrix_array_integer(int** matrix, int height,
  int width)
{
  int* array = matrix_index_array(matrix, height);
  int integer = array_index_integer(array, width);
  return integer;
}

int** shuffle_integer_matrix(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int random = generate_random_integer(0,height - 1);
    matrix = switch_matrix_arrays(matrix,index,random);
  }
  return matrix;
}

int** delete_matrix_array(int** matrix, int height,
  int index)
{
  matrix = move_matrix_arrays(matrix, height, index);
  int length = matrix_array_length(matrix, 0);
  return allocate_matrix_array(matrix, (height - 1),
    generate_integer_array(length));
}

int matrix_array_total(int** matrix, int index)
{
  int* array = matrix_index_array(matrix, index);
  int length = integer_array_length(array);
  return integer_array_total(array, length);
}
