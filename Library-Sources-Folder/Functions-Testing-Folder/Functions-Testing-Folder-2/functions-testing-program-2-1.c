
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int generate_integer_matrix_test(int height, int width,
  int** output)
{
  int** matrix = generate_integer_matrix(height,width);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int allocate_matrix_integer_test(int** matrix,
  int height, int width, int integer, int** output)
{
  matrix = allocate_matrix_integer(matrix,height,width,
    integer);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int delete_matrix_integer_test(int** matrix,int height,
  int width, int** output)
{
  matrix = delete_matrix_integer(matrix, height,width);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int integer_matrix_height_test(int** matrix, int width,
  int output)
{
  int height = integer_matrix_height(matrix, width);
  return compare_integer_variables(height, output);
}

int matrix_contains_integer_test(int** matrix,
  int height, int width, int integer, int output)
{
  int boolean = matrix_contains_integer(matrix, height,
    width, integer);
  return compare_integer_variables(boolean, output);
}

int remove_matrix_integer_test(int** matrix,int height,
  int integer, int** output)
{
  matrix=remove_matrix_integer(matrix, height,integer);
  int width = matrix_array_length(matrix, 0);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int add_matrix_integer_test(int** matrix, int height,
  int integer, int** output)
{
  matrix = add_matrix_integer(matrix, height, integer);
  return compare_integer_matrix(matrix, output, height,
    matrix_array_length(matrix, 0));
}

int remove_matrix_integers_test(int**matrix,int height,
  int integer, int** output)
{
  matrix=remove_matrix_integers(matrix,height,integer);
  return compare_integer_matrix(matrix, output, height,
    matrix_array_length(matrix, 0));
}

int switch_adjacent_arrays_test(int** matrix,int index,
  int** output)
{
  matrix = switch_adjacent_arrays(matrix, index);
  int width = matrix_array_length(matrix, 0);
  int height = integer_matrix_height(matrix, width);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int add_matrix_array_test(int** matrix, int height,
  int* array, int** output)
{
  matrix = add_matrix_array(matrix, height, array);
  return compare_integer_matrix(matrix,output,height+1,
    matrix_array_length(matrix, 0));
}

int remove_matrix_array_test(int** matrix, int height,
  int* array, int** output)
{
  matrix = remove_matrix_array(matrix, height, array);
  return compare_integer_matrix(matrix, output, height,
    matrix_array_length(matrix, 0));
}
