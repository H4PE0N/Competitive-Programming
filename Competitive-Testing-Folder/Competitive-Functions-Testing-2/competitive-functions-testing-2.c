
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

int generate_matrix_array_test(int length, int width,
  int** o_matrix)
{
  int** matrix=generate_matrix_array(length, width);
  return compare_matrix_arrays(matrix, o_matrix,
    length, width);
}

int allocate_matrix_integer_test(int** i_matrix, int x,
  int y, int integer, int** o_matrix)
{
  i_matrix = allocate_matrix_integer(i_matrix, x, y,
    integer);
  return compare_matrix_arrays(i_matrix, o_matrix,
    x, y);
}

int delete_matrix_integer_test(int** i_matrix, int x,
  int y, int length, int** o_matrix)
{
  i_matrix = delete_matrix_integer(i_matrix, x, y,
    length);
  return compare_matrix_arrays(i_matrix, o_matrix,
    x, y);
}

int calculate_matrix_length_test(int** i_matrix,
  int i_length, int o_length)
{
  int length = calculate_matrix_length(i_matrix,
    i_length);
  return (length == o_length);
}

int matrix_contains_integer_test(int** i_matrix,
  int length, int width, int integer, int boolean)
{
  int output = matrix_contains_integer(i_matrix,
    length, width, integer);
  return (output == boolean);
}

int remove_matrix_integer_test(int** i_matrix,
  int length, int integer, int** o_matrix)
{
  i_matrix = remove_matrix_integer(i_matrix, length,
    integer);
  int a_length = integer_array_length(*(i_matrix));
  return compare_matrix_arrays(i_matrix, o_matrix,
    length, a_length);
}

int add_matrix_integer_test(int** i_matrix,
  int i_length,int height,int integer,int** o_matrix)
{
  int length = calculate_matrix_length(i_matrix,
    height);
  i_matrix = add_matrix_integer(i_matrix, length,
    integer);
  return compare_matrix_arrays(i_matrix, o_matrix,
    i_length, height);
}

int remove_matrix_integers_test(int** i_matrix,
  int integer, int height, int** o_matrix)
{
  i_matrix = remove_matrix_integers(i_matrix, integer,
    height);
  int length = calculate_matrix_length(i_matrix,
    height);
  return compare_matrix_arrays(i_matrix, o_matrix,
    length, height);
}
