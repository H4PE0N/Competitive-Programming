
#include <stdlib.h>
#include <stdbool.h>

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
