
/* This program contains functions that test the
functions in file competitive-functions-program-2.h */

#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

// Inputs: total length, total width, output matrix;
int generate_matrix_array_test(int t_length,int t_width,
  int** o_matrix)
{
  int** matrix=generate_matrix_array(t_length,t_width);
  return compare_matrix_arrays(matrix, o_matrix,
    t_length, t_width);
}

// Inputs: input matrix, x, y, number, output matrix;
int allocate_matrix_value_test(int** i_matrix, int x,
  int y, int number, int** o_matrix)
{
  i_matrix = allocate_matrix_value(i_matrix,x,y,number);
  return compare_matrix_arrays(i_matrix, o_matrix,
    x, y);
}

/* Inputs: input matrix, x, y, total length,
output matrix; */
int delete_matrix_value_test(int** i_matrix, int x,
  int y, int t_length, int** o_matrix)
{
  i_matrix = delete_matrix_value(i_matrix, x, y,
    t_length);
  return compare_matrix_arrays(i_matrix, o_matrix,
    x, y);
}

/* Inputs: input matrix, total array length,
output length; */
int calculate_matrix_length_test(int** i_matrix,
  int i_length, int o_length)
{
  int length=calculate_matrix_length(i_matrix,i_length);
  return (length == o_length);
}

/* Inputs: input matrix, m length, a length number,
output boolean; */
int matrix_contains_number_test(int** i_matrix,
  int m_length, int a_length, int number, int boolean)
{
  int output = matrix_contains_number(i_matrix,m_length,
    a_length, number);
  return (output == boolean);
}

/* Inputs: input matrix, total length, number,
output matrix; */
int remove_matrix_number_test(int** i_matrix,
  int t_length, int number, int** o_matrix)
{
  i_matrix = remove_matrix_number(i_matrix, t_length,
    number);
  int a_length = calculate_array_length(*(i_matrix));
  return compare_matrix_arrays(i_matrix, o_matrix,
    t_length, a_length);
}

/* Inputs: input matrix, m length, a length, number,
output matrix; */
int add_matrix_number_test(int** i_matrix,int m_length,
  int a_length, int number, int** o_matrix)
{
  int c_length=calculate_matrix_length(i_matrix,
    a_length);
  i_matrix=add_matrix_number(i_matrix,c_length,number);
  return compare_matrix_arrays(i_matrix, o_matrix,
    m_length, a_length);
}

/* Made by Roy Hampus Fridholm */
