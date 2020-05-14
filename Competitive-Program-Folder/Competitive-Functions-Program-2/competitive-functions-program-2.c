
#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

int** generate_matrix_array(int length, int width)
{
  int** matrix = malloc(sizeof(matrix) * length);
  for(int index = 0; index < length; index++)
  {
    *(matrix + index) = generate_integer_array(width);
  }
  return matrix;
}

int** allocate_matrix_integer(int** matrix,int m_index,
  int a_index, int integer)
{
  *(matrix + m_index) = allocate_array_integer(
    *(matrix + m_index), a_index, integer);
  return matrix;
}

int** delete_matrix_integer(int** matrix, int m_index,
  int a_index, int length)
{
  *(matrix + m_index) = delete_array_integer(
    *(matrix + m_index), length, a_index);
  return matrix;
}

int calculate_matrix_length(int** matrix, int i_length)
{
  int length = 0;
  while(integer_array_length(*(matrix + length))
  >= i_length) { length += 1; } return length;
}

int matrix_contains_integer(int** matrix, int m_length,
  int a_length, int integer)
{
  for(int index = 0; index < m_length; index++)
  {
    if(array_contains_integer(*(matrix + index),
    a_length, integer)) return true;
  }
  return false;
}

int** remove_matrix_integer(int** matrix, int length,
  int integer)
{
  for(int index = (length - 1); index >= 0; index--)
  {
    int a_length=integer_array_length(*(matrix+index));

    if(!array_contains_integer(*(matrix + index),
      a_length, integer)) continue;
    *(matrix + index) = remove_array_integer(
      *(matrix + index), a_length, integer); break;
  }
  return matrix;
}

int** add_matrix_integer(int** matrix, int length,
  int integer)
{
  int a_length=integer_array_length(*(matrix+length));
  *(matrix + length) = add_array_integer(*(matrix +
    length), a_length, integer);
  return matrix;
}

int compare_matrix_arrays(int** first, int** second,
  int m_length, int a_length)
{
  for(int index = 0; index <= m_length; index++)
  {
    if(!compare_integer_arrays(*(first + index),
      *(second + index), a_length)) return false;
  }
  return true;
}

int** remove_matrix_integers(int** matrix, int integer,
  int a_length)
{
  int length=calculate_matrix_length(matrix,a_length);
  for(int index = 0; index <= length; index++)
  {
    *(matrix + index) = remove_array_integers(
      *(matrix + index), integer);
  }
  return matrix;
}
