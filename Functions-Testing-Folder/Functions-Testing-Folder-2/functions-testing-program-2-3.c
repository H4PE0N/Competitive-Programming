
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

int delete_matrix_array_test(int** matrix, int height,
  int index, int** output)
{
  matrix = delete_matrix_array(matrix, height, index);
  return compare_matrix_arrays(matrix, output, height,
    matrix_array_length(matrix, 0));
}

int allocate_matrix_array_test(int** matrix, int index,
  int* array, int** output)
{
  matrix = allocate_matrix_array(matrix, index, array);
  int width = matrix_array_length(matrix, 0);
  return compare_matrix_arrays(matrix, output,
    integer_matrix_height(matrix, width), width);
}
