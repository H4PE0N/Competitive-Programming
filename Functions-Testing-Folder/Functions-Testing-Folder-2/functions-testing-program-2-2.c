
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

int switch_matrix_arrays_test(int** i_matrix, int width,
  int i_height, int** o_matrix)
{
  i_matrix = switch_matrix_arrays(i_matrix, width,
    i_height);
  int height = integer_matrix_height(i_matrix,width);
  return compare_matrix_arrays(i_matrix, o_matrix,
    height, width);
}

int move_matrix_arrays_test(int** i_matrix, int height,
  int start, int** o_matrix)
{
  i_matrix = move_matrix_arrays(i_matrix, height,
    start);
  return compare_matrix_arrays(i_matrix, o_matrix,
    height, integer_array_length(*(i_matrix + 0)));
}
