
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

int generate_matrix_array_test(int height, int width,
  int** output)
{
  int** matrix = generate_matrix_array(height, width);
  return compare_matrix_arrays(matrix, output, height,
    width);
}

int allocate_matrix_integer_test(int** matrix,
  int height, int width, int integer, int** output)
{
  matrix = allocate_matrix_integer(matrix,height,width,
    integer);
  return compare_matrix_arrays(matrix, output, height,
    width);
}

int delete_matrix_integer_test(int** matrix,int height,
  int index, int** output)
{
  matrix = delete_matrix_integer(matrix, height,index);
  int width = matrix_array_length(matrix, height);
  return compare_matrix_arrays(matrix, output, height,
    width);
}

int integer_matrix_height_test(int** matrix, int width,
  int output)
{
  int height = integer_matrix_height(matrix, width);
  return (height == output);
}

int matrix_contains_integer_test(int** matrix,
  int height, int width, int integer, int output)
{
  return matrix_contains_integer(matrix, height, width,
    integer) == output;
}

int remove_matrix_integer_test(int** matrix,int height,
  int integer, int** output)
{
  matrix=remove_matrix_integer(matrix, height,integer);
  int width = matrix_array_length(matrix, 0);
  return compare_matrix_arrays(matrix, output, height,
    width);
}

int add_matrix_integer_test(int** matrix, int height,
  int width, int integer, int** output)
{
  matrix = add_matrix_integer(matrix,
    integer_matrix_height(matrix, width), integer);
  return compare_matrix_arrays(matrix, output, height,
    width);
}

int remove_matrix_integers_test(int** matrix,int width,
  int integer, int** output)
{
  matrix=remove_matrix_integers(matrix, width,integer);
  int height = integer_matrix_height(matrix, width);
  return compare_matrix_arrays(matrix, output, height,
    width);
}

int switch_adjacent_arrays_test(int**matrix,int height,
  int** output)
{
  matrix = switch_adjacent_arrays(matrix, height);
  return compare_matrix_arrays(matrix, output, height,
    matrix_array_length(matrix, 0));
}
