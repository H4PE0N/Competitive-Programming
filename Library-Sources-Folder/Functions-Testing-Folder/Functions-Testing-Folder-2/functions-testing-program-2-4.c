
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
