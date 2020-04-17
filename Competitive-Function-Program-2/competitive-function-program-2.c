
/* A collection of competitive functions*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

/* Made by Roy Hampus Fridholm - 2020/04/17 */
