
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int switch_matrix_arrays_test(int** matrix, int first,
  int second, int** output)
{
  matrix = switch_matrix_arrays(matrix, first, second);
  int width = matrix_array_length(matrix, 0);
  int height = integer_matrix_height(matrix, width);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int move_matrix_arrays_test(int** matrix, int height,
  int start, int** output)
{
  matrix = move_matrix_arrays(matrix, height, start);
  return compare_integer_matrix(matrix, output, height,
    matrix_array_length(matrix, 0));
}

int compare_integer_matrix_test(int** first,int**second,
  int height, int width, int output)
{
  int boolean = compare_integer_matrix(first, second,
    height, width); return (boolean == output);
}

int shuffle_matrix_arrays_test(int** matrix,int height,
  int** output)
{
  int width = matrix_array_length(matrix, 0);
  matrix = shuffle_matrix_arrays(matrix, height);
  int boolean = !compare_integer_matrix(matrix, output,
    height, width);
  return boolean && compare_matrix_content(matrix,
    output, height, width);
}

int duplicate_integer_matrix_test(int** matrix,
  int height, int width, int** output)
{
  int** doublet=duplicate_integer_matrix(matrix,height,
    width);
  return compare_integer_matrix(doublet, output,height,
    width);
}

int sort_matrix_arrays_test(int** matrix, int height,
  int** output)
{
  matrix = sort_matrix_arrays(matrix, height);
  return compare_integer_matrix(matrix, output, height,
     matrix_array_length(matrix, 0));
}

int compare_matrix_content_test(int** first,
  int** second, int height, int width, int output)
{
  int boolean = compare_matrix_content(first, second,
    height, width); return (boolean == output);
}

int matrix_index_array_test(int** matrix, int index,
  int* output)
{
  int* array = matrix_index_array(matrix, index);
  int length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int matrix_array_length_test(int** matrix, int index,
  int output)
{
  int length = matrix_array_length(matrix, index);
  return (length == output);
}

int matrix_array_contains_test(int** matrix, int index,
  int integer, int output)
{
  int boolean = matrix_array_contains(matrix, index,
    integer); return (boolean == output);
}
