
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

int** reverse_integer_matrix(int** matrix, int height,
  int width)
{
  int** reverse=generate_integer_matrix(height, width);
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, height -
      (index + 1));
    reverse = add_matrix_array(reverse, index, array);
  }
  return reverse;
}

int** reverse_matrix_arrays(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    *(matrix + index) = reverse_integer_array(array,
      matrix_array_length(matrix, index));
  }
  return matrix;
}

int matrix_array_index(int** matrix, int height,
  int* array)
{
  int array_index = height;
  for(int index = (height - 1); index >= 0; index -= 1)
  {
    int* index_array=matrix_index_array(matrix, index);
    int length = matrix_array_length(matrix, index);
    if(compare_integer_arrays(array, index_array,
      length)) { array_index = index; break; }
  }
  return array_index;
}

int** remove_matrix_array(int** matrix, int height,
  int* array)
{
  int index = matrix_array_index(matrix, height,array);
  return delete_matrix_array(matrix, height, index);
}

int** add_matrix_array(int** matrix, int height,
  int* array)
{
  matrix = allocate_matrix_array(matrix, height,array);
  return matrix;
}
