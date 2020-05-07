
/*  This program contains functions that deals with
matrixis and some data that have with it to do. */

#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

// Function takes in total length and width;
int** generate_matrix_array(int t_length, int t_width)
{
  int** matrix = malloc(sizeof(matrix) * t_length);
  for(int index = 0; index < t_length; index++)
  {
    *(matrix + index) = generate_empty_array(t_width);
  }
  return matrix;
}

int** allocate_matrix_value(int** matrix, int m_index,
  int a_index, int number)
{
  *(matrix + m_index) = allocate_array_value(
    *(matrix + m_index), a_index, number);
  return matrix;
}

// Function takes in total length of array;
int** delete_matrix_value(int** matrix, int m_index,
  int a_index, int t_length)
{
  *(matrix + m_index) = delete_array_value(
    *(matrix + m_index), t_length, a_index);
  return matrix;
}

// Function takes in total length of array;
int calculate_matrix_length(int** matrix, int t_length)
{
  int length = 0;
  while(calculate_array_length(*(matrix + length))
  >= t_length) { length += 1; } return length;
}

// Function takes in total length of array;
int matrix_contains_number(int** matrix, int t_length,
  int number)
{
  int length = calculate_matrix_length(matrix, t_length);
  for(int index = 0; index <= length; index++)
  {
    if(array_contains_number(*(matrix + index),
    t_length, number)) { return true; }
  }
  return false;
}

// Function takes in current length of matrix;
int** remove_matrix_number(int** matrix, int c_length,
  int number)
{
  for(int index = c_length; index >= 0; index--)
  {
    int a_length = calculate_array_length(*(matrix +
      index));
    if(array_contains_number(*(matrix + index),a_length,
      number)) { *(matrix + index) =
      remove_array_number(*(matrix + index), a_length,
      number); break; }
  }
  return matrix;
}

// Function takes in current length of matrix;
int** add_matrix_number(int** matrix, int c_length,
  int number)
{
  int a_length = calculate_array_length(*(matrix +
    c_length));
  *(matrix + c_length) = add_array_number(*(matrix +
    c_length), a_length, number);
  return matrix;
}

/* Made by Roy Hampus Fridholm */
