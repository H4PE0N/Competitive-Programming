
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
  int** reverse = generate_matrix_array(height, width);
  for(int index = 0; index < height; index = index + 1)
  {
    *(reverse + index) = matrix_index_array(matrix,
      height - (index + 1));
  }
  return matrix;
}

int** reverse_matrix_arrays(int** matrix, int height,
  int width)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    *(matrix + index) = reverse_integer_array(array,
      width);
  }
  return matrix;
}
