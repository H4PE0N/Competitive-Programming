
/* This program contains functions that deals with
arrays and calculates thingd using it's data. */

#include <stdlib.h>
#include <stdbool.h>

int* allocate_array_value(int* array, int index, int num)
{
  *(array + index) = num; return array;
}

int* allocate_array_values(int* array, int length)
{
  for(int index = 0; index < length; index++)
  {
    allocate_array_value(array, index, 0);
  } return array;
}

int* generate_empty_array(const int length)
{
  int* array = malloc(sizeof(array) * length);
  return allocate_array_values(array, length);
}

int calculate_array_length(const int* array)
{
  int length = 0;
  while(*(array + length) != '\0') { length += 1; }
  return length;
}

int array_contains_number(int* array, int length, int num)
{
  for(int index = 0; index < length; index++)
  {
    if(*(array + index) == num) { return true; }
  }
  return false;
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

int* move_array_numbers(int* array, int length, int start)
{
  for(int index = start; index < length; index++)
  {
    array = switch_array_numbers(array, index);
  }
  return array;
}

int* remove_array_number(int* array, int length, int num)
{
  int start = length;
  for(int index = (length - 1); index >= 0; index--)
  {
    if(*(array + index) == num) {start = index; break;}
  }
  array = move_array_numbers(array, length, start);
  return allocate_array_value(array, (length - 1), 0);
}

int* add_array_number(int* array, int length, int num)
{
  *(array + length) = num; return array;
}

/* Made by Roy Hampus Fridholm */
