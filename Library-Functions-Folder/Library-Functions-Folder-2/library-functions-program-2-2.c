
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../Library-Functions-Folder-2/\
library-functions-program-2.h"

int** switch_matrix_integers(int** matrix, int height,
  int width)
{
  int switch_integer = matrix[height][width];
  matrix[height][width] = matrix[height + 1][width];
  matrix[height + 1][width] = switch_integer;
  return matrix;
}

int** switch_matrix_arrays(int** matrix, int width,
  int height)
{
  for(int index = 0; index < width; index = index + 1)
  {
    matrix = switch_matrix_integers(matrix, height,
      index);
  }
  return matrix;
}

int** move_matrix_arrays(int** matrix, int height,
  int start)
{
  int width = integer_array_length(*(matrix + 0));
  for(int index = start; index < (height-1); index++)
  {
    matrix = switch_matrix_arrays(matrix, width,
      index);
  }
  return matrix;
}

int** generate_random_matrix(int height, int width,
  int minimum, int maximum)
{
  int** matrix = generate_matrix_array(height, width);
  for(int index = 0; index < height; index = index+1)
  {
    *(matrix + index) = generate_random_integers(
      width, minimum, maximum);
  }
  return matrix;
}

void integer_matrix_stdout(int** matrix, int height,
  int width)
{
  for(int index = 0; index < height; index = index+1)
  {
    integer_array_stdout(*(matrix + index), width);
  }
}

int** shuffle_integer_matrix(int** matrix,int height)
{
  for(int index = 0; index < height; index = index+1)
  {
    int width = integer_array_length(matrix[index]);
    *(matrix + index) = shuffle_integer_array(
      *(matrix + index), width);
  }
  return matrix;
}

int** duplicate_integer_matrix(int** i_matrix,
  int height, int width)
{
  int** matrix = generate_matrix_array(height,width);
  for(int index = 0; index < height; index = index+1)
  {
    *(matrix + index) = duplicate_integer_array(
      *(i_matrix + index), width);
  }
  return matrix;
}

int** sort_integer_matrix(int** matrix, int height)
{
  for(int index = 0; index < height; index = index+1)
  {
    int width = integer_array_length(matrix[index]);
    *(matrix + index) = sort_integer_array(
      *(matrix + index), width);
  }
  return matrix;
}

int compare_matrix_content(int** first, int** second,
  int height, int width)
{
  first = sort_integer_matrix(first, height);
  return compare_matrix_arrays(first,
    sort_integer_matrix(first, height),height,width);
}
