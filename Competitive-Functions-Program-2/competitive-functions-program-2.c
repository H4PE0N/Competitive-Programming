
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

int calculate_matrix_length(int** matrix)
{
  int length = 0;
  while(calculate_array_length(*(matrix + length)))
  { length += 1; } return length;
}

int matrix_contains_number(int** matrix, const int number)
{
  int length = calculate_matrix_length(matrix);
  for(int index = 0; index < length; index++)
  {
    int a_length = calculate_array_length(
      *(matrix + index))
    if(array_contains_number(*(matrix + index), a_length,
      number)) { return true; }
  }
  return false;
}

int** move_matrix_number(int** matrix, int* info, int start)
{
  *(matrix + *(info)) = move_array_numbers(
    *(matrix + *(info)), *(info + 1), start);
  *(matrix + *(info)) = allocate_array_value(
    *(matrix + *(info), (*(info + 1) - 1), '\0');
  return matrix;
}

int** remove_matrix_number(int** matrix, int* info, int num)
{
  int start = *(info + 1);
  for(int index = (*(info + 1)-1); index >= 0; index--)
  {
    if(*(*(matrix + *(info)) + index == num)
    { start = index; break; }
  }
  return move_matrix_number(matrix, info, start);
}

int** add_matrix_number(int** matrix, int* info, int num)
{
  *(matrix + *(info)) = allocate_array_value(
    *(matrix + *(info)), *(info + 1), num);
  *(matrix + *(info)) = allocate_array_value(
    *(matrix + *(info)), *(info + 1) + 1, '\0');
  return matrix;
}

/* Made by Roy Hampus Fridholm */
