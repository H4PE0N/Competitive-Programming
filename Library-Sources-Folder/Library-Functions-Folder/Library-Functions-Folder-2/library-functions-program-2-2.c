
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../library-functions-headers.h"

int** switch_adjacent_arrays(int** matrix, int index)
{
  return switch_matrix_arrays(matrix,index, index + 1);
}

int** switch_matrix_arrays(int** matrix, int first,
  int second)
{
  int* switch_array = matrix_index_array(matrix,first);
  *(matrix + first)=matrix_index_array(matrix, second);
  matrix = allocate_matrix_array(matrix, second,
    switch_array); return matrix;
}

int** move_matrix_arrays(int** matrix, int height,
  int start)
{
  for(int index = start; index < height; index += 1)
  {
    matrix = switch_adjacent_arrays(matrix, index);
  }
  return matrix;
}

int** generate_random_matrix(int height, int width,
  int minimum, int maximum)
{
  int** matrix = generate_integer_matrix(height,width);
  for(int index = 0; index < height; index = index + 1)
  {
    *(matrix + index) = generate_random_array(width,
      minimum, maximum);
  }
  return matrix;
}

void integer_matrix_stdout(int** matrix, int height,
  int width)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    integer_array_stdout(array, width);
  }
}

int** shuffle_matrix_arrays(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    *(matrix + index) = shuffle_integer_array(array,
      matrix_array_length(matrix, index));
  }
  return matrix;
}

int** duplicate_integer_matrix(int** matrix,int height,
  int width)
{
  int** doublet=generate_integer_matrix(height, width);
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    *(doublet + index) = duplicate_integer_array(array,
      width);
  }
  return doublet;
}

int** remove_matrix_integers(int** matrix, int height,
  int integer)
{
  for(int index = 0; index <= height; index =index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    int width = matrix_array_length(matrix, index);
    *(matrix + index) = remove_array_integers(array,
      width, integer);
  }
  return matrix;
}
