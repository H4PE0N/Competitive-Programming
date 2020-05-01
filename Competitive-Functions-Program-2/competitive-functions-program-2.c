
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

int calculate_horizontal_distance(int* point, int* target)
{
  return abs(*(point + 0) - *(target + 0));
}

int calculate_vertical_distance(int* point, int* target)
{
  return abs(*(point + 1) - *(target + 1));
}

int calculate_matrix_distance(int* point, int* target)
{
  int vertical = calculate_vertical_distance(point, target),
  horizontal = calculate_horizontal_distance(point, target);
  return sqrt(pow(horizontal, 2) + pow(vertical, 2));
}

/* Made by Roy Hampus Fridholm */
