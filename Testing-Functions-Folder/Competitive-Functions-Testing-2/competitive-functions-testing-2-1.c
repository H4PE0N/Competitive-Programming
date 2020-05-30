
#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-1/\
competitive-functions-program-1.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Testing-2/\
competitive-functions-testing-2.h"

int generate_matrix_array_test(int height, int width,
  int** i_matrix)
{
  int** matrix = generate_matrix_array(height, width);
  return compare_matrix_arrays(matrix,i_matrix,height,
    width);
}

int allocate_matrix_integer_test(int** i_matrix,int x,
  int y, int integer, int** o_matrix)
{
  i_matrix = allocate_matrix_integer(i_matrix, x, y,
    integer);
  return compare_matrix_arrays(i_matrix, o_matrix,
    x, y);
}

int delete_matrix_integer_test(int** i_matrix, int x,
  int y, int height, int** o_matrix)
{
  i_matrix = delete_matrix_integer(i_matrix, x, y,
    height);
  return compare_matrix_arrays(i_matrix, o_matrix,
    x, y);
}

int integer_matrix_height_test(int** matrix,
  int width, int i_height)
{
  int height = integer_matrix_height(matrix,width);
  return (height == i_height);
}

int matrix_contains_integer_test(int** matrix,
  int height, int width, int integer, int output)
{
  return matrix_contains_integer(matrix, height,
    width, integer) == output;
}

int remove_matrix_integer_test(int** i_matrix,
  int height, int integer, int** o_matrix)
{
  i_matrix = remove_matrix_integer(i_matrix, height,
    integer);
  int width = integer_array_length(*(i_matrix));
  return compare_matrix_arrays(i_matrix, o_matrix,
    height, width);
}

int add_matrix_integer_test(int** i_matrix,
  int i_height,int width,int integer,int** o_matrix)
{
  int height = integer_matrix_height(i_matrix,
    width);
  i_matrix = add_matrix_integer(i_matrix, height,
    integer);
  return compare_matrix_arrays(i_matrix, o_matrix,
    i_height, width);
}

int remove_matrix_integers_test(int** i_matrix,
  int integer, int width, int** o_matrix)
{
  i_matrix = remove_matrix_integers(i_matrix,integer,
    width);
  int height = integer_matrix_height(i_matrix,width);
  return compare_matrix_arrays(i_matrix, o_matrix,
    height, width);
}

int switch_matrix_integers_test(int** i_matrix,
  int width, int index, int** o_matrix)
{
  i_matrix = switch_matrix_integers(i_matrix, width,
    index);
  int height = integer_matrix_height(i_matrix,width);
  return compare_matrix_arrays(i_matrix, o_matrix,
    height, width);
}
