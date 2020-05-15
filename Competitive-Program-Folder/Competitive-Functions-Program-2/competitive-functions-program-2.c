
#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

int** generate_matrix_array(int height, int width)
{
  int** matrix = malloc(sizeof(matrix) * height);
  for(int index = 0; index < height; index++)
  {
    *(matrix + index) = generate_integer_array(width);
  }
  return matrix;
}

int** allocate_matrix_integer(int** matrix,int height,
  int width, int integer)
{
  *(matrix + height) = allocate_array_integer(
    *(matrix + height), width, integer);
  return matrix;
}

int** delete_matrix_integer(int** matrix, int height,
  int width, int length)
{
  *(matrix + height) = delete_array_integer(
    *(matrix + height), length, width);
  return matrix;
}

int integer_matrix_height(int** matrix, int width)
{
  int length = 0;
  while(integer_array_length(*(matrix + length))
  >= width) { length += 1; } return length;
}

int matrix_contains_integer(int** matrix, int height,
  int width, int integer)
{
  for(int index = 0; index < height; index++)
  {
    if(array_contains_integer(*(matrix + index),
      width, integer)) return true;
  }
  return false;
}

int** remove_matrix_integer(int** matrix, int height,
  int integer)
{
  for(int index = (height - 1); index >= 0; index--)
  {
    int width = integer_array_length(*(matrix+index));
    if(!array_contains_integer(*(matrix + index),
      width, integer)) continue;
    *(matrix + index) = remove_array_integer(
      *(matrix + index), width, integer); break;
  }
  return matrix;
}

int** add_matrix_integer(int** matrix, int height,
  int integer)
{
  int width = integer_array_length(*(matrix+height));
  *(matrix + height) = add_array_integer(*(matrix +
    height), width, integer);
  return matrix;
}

int compare_matrix_arrays(int** first, int** second,
  int height, int width)
{
  for(int index = 0; index <= height; index++)
  {
    if(!compare_integer_arrays(*(first + index),
      *(second + index), width)) return false;
  }
  return true;
}

int** remove_matrix_integers(int** matrix,int integer,
  int width)
{
  int height=integer_matrix_height(matrix, width);
  for(int index = 0; index <= height; index++)
  {
    *(matrix + index) = remove_array_integers(
      *(matrix + index), width, integer);
  }
  return matrix;
}
