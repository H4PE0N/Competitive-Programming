
/* A collection of competitive functions*/

#include <stdio.h>
#include <stdlib.h>

int* allocate_array_values(int* array, int length)
{
  for(int index = 0; index < length; index++)
  {
    *(array + index) = (0); /* Value asigned later */
  }
  return array;
}

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

/* Made by Roy Hampus Fridholm - 2020/04/15 */
