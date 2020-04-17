
/* A collection of competitive functions*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "../Competitive-Function-Program-1/\
competitive-function-program-1.h"

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

typedef int (*criterion) (int);

int* add_numbers_by_criterion(int* array, int length,
  criterion criterion)
{
  int* numbers = generate_empty_array(length), amount = 0;
  for(int index = 0; index < length; index++)
  {
    if(criterion(*(array + index)))
    {
      *(numbers + amount) = *(array + index); amount++;
    }
  }
  return numbers;
}

int array_contains_number(int* array, int num, int length)
{
  for(int index = 0; index < length; index++)
  {
    if(*(array + index) == num) { return true; }
  }
  return false;
}

/* Made by Roy Hampus Fridholm - 2020/04/17 */
