
/*  This program contains functions that deals with
matrixis and some data that have with it to do. */

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

int** allocate_matrix_values(int** matrix, int* messures)
{
  for(int index = 0; index < *(messures + 0); index++)
  {
    *(matrix + index) = allocate_array_values(
      *(matrix + index), *(messures + 1));
  }
  return matrix;
}

int** generate_matrix_array(int length, int width)
{
  int** matrix = malloc(sizeof(matrix) * length);
  for(int index = 0; index < length; index++)
  {
    *(matrix + index) = malloc(sizeof(matrix) * width);
  }
  int messures[] = {length, width};
  return allocate_matrix_values(matrix, messures);
}

int calculate_matrix_length(int** matrix, int a_length)
{
  int length = 0;
  while(calculate_array_length(*(matrix + length))
  >= a_length) { length += 1; } return length;
}

int matrix_contains_number(int** matrix, int a_length,
  int number)
{
  int length = calculate_matrix_length(matrix, a_length);
  for(int index = 0; index < length; index++)
  {
    int a_length = calculate_array_length(
      *(matrix + index));
    if(array_contains_number(*(matrix + index),
    a_length, number)) { return true; }
  }
  return false;
}

int** remove_matrix_number(int** matrix, int length,
  int number)
{
  for(int index = length; index >= 0; index--)
  {
    int a_length = calculate_array_length(*(matrix +
      index));
    if(array_contains_number(*(matrix + index),
    a_length, number)) { *(matrix + index) =
      remove_array_number(*(matrix + index),
      a_length, number); break; }
  }
  return matrix;
}

int** add_matrix_number(int** matrix, int length,
  int number)
{
  int a_length = calculate_array_length(*(matrix +
    length));
  *(matrix + length) = add_array_number(*(matrix +
    length), a_length, number);
  return matrix;
}

/* Made by Roy Hampus Fridholm */
