
#include "../library-functions-headers.h"

int** switch_adjacent_arrays(int** matrix, int index)
{
  matrix = switch_matrix_arrays(matrix,index, index+1);
  return matrix;
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
    int* array = generate_random_array(width, minimum,
      maximum);
    matrix = allocate_matrix_array(matrix,index,array);
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
    int length = integer_array_length(array);
    array = shuffle_integer_array(array, length);
    matrix = allocate_matrix_array(matrix,index,array);
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
    int* current=duplicate_integer_array(array, width);
    doublet = allocate_matrix_array(doublet, index,
      current);
  }
  return doublet;
}

int** remove_matrix_integers(int** matrix, int height,
  int integer)
{
  for(int index = 0; index <= height; index =index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    int length = integer_array_length(array);
    array=remove_array_integers(array,length, integer);
    matrix = allocate_matrix_array(matrix,index,array);
  }
  return matrix;
}

int matrix_array_index(int** matrix, int height,
  int* array)
{
  for(int index = (height - 1); index >= 0; index -= 1)
  {
    int* current = matrix_index_array(matrix, index);
    int length = matrix_array_length(matrix, index);
    if(compare_integer_arrays(array, current, length))
      return index;
  }
  return height;
}
