
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

int switch_matrix_arrays_test(int** i_matrix,int first,
  int second, int** o_matrix)
{
  i_matrix = switch_matrix_arrays(i_matrix, first,
    second);
  int* array = matrix_index_array(i_matrix, 0);
  int width = integer_array_length(array);
  int height = integer_matrix_height(i_matrix,width);
  return compare_matrix_arrays(i_matrix, o_matrix,
    height, width);
}

int move_matrix_arrays_test(int** i_matrix, int height,
  int start, int** o_matrix)
{
  i_matrix = move_matrix_arrays(i_matrix, height,
    start);
  int* array = matrix_index_array(i_matrix, 0);
  return compare_matrix_arrays(i_matrix, o_matrix,
    height, integer_array_length(array));
}

int compare_matrix_arrays_test(int** first,
  int** second, int height, int width, int boolean)
{
  int output = compare_matrix_arrays(first, second,
    height, width);
  return (output == boolean);
}

int shuffle_integer_matrix_test(int** i_matrix,
  int height, int** o_matrix)
{
  int width = integer_array_length(*(i_matrix + 0));
  i_matrix = shuffle_integer_matrix(i_matrix, height);
  int result = !compare_matrix_arrays(i_matrix,
    o_matrix, height, width);
  return result && compare_matrix_content(i_matrix,
    o_matrix, height, width);
}

int duplicate_integer_matrix_test(int** i_matrix,
  int height, int width, int** o_matrix)
{
  int** matrix = duplicate_integer_matrix(i_matrix,
    height, width);
  return compare_matrix_arrays(matrix, o_matrix,
    height, width);
}

int sort_integer_matrix_test(int** i_matrix,int height,
  int** o_matrix)
{
  i_matrix = sort_integer_matrix(i_matrix, height);
  int width = integer_array_length(*(i_matrix + 0));
  return compare_matrix_arrays(i_matrix, o_matrix,
    height, width);
}

int compare_matrix_content_test(int** first,
  int** second, int height, int width, int boolean)
{
  int output = compare_matrix_content(first, second,
    height, width);
  return (output == boolean);
}

int matrix_index_array_test(int** matrix, int index,
  int* i_array)
{
  int* array = matrix_index_array(matrix, index);
  int length = integer_array_length(array);
  return compare_integer_arrays(array,i_array,length);
}
