
/* A collection of competitive functions*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* allocate_array_values(int* array, int length)
{
  for(int index = 0; index < length; index++)
  {
    *(array + index) = (0); } return array;
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

int* generate_empty_array(const int length)
{
  int* array = malloc(sizeof(array) * length);
  return allocate_array_values(array, length);
}

int* switch_array_numbers(int* array, int index)
{
  int switch_value = *(array + index);
  *(array + index) = *(array + (index + 1) );
  *(array + (index + 1) ) = switch_value;
  return array;
}

int* bubble_sort_iteration(int* array, int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(*(array + index) > *(array + (index + 1) ))
    {
      array = switch_array_numbers(array, index);
    }
  }
  return array;
}

int* bubble_sort_array(int* array, const int length)
{
  for(int index = length; index >= 0; index--)
  {
    array = bubble_sort_iteration(array, index);
  }
  return array;
}

/* Made by Roy Hampus Fridholm - 2020/04/15 */
