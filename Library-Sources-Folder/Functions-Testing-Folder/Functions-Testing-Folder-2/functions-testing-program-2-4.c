
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int insert_matrix_integers_test(int** matrix,
  int* first, int* second, int integer, int** output)
{
  matrix = insert_matrix_integers(matrix, first,second,
    integer);
  int height = coordinate_variable_height(second);
  int width = coordinate_variable_width(second);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int matrix_array_index_test(int** matrix, int height,
  int* array, int output)
{
  int index = matrix_array_index(matrix, height,array);
  return compare_integer_variables(index, output);
}

int reverse_integer_matrix_test(int**matrix,int height,
  int width, int** output)
{
  matrix = reverse_integer_matrix(matrix,height,width);
  return compare_integer_matrix(matrix, output, height,
    width);
}
