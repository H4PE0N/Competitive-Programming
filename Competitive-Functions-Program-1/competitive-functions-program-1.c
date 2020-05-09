
/* This program contains functions that deals with
arrays and calculates thingd using it's data. */

#include <stdlib.h>
#include <stdbool.h>

// Inputs: array, index, number;
int* allocate_array_value(int* array, int index,
  int number)
{
  *(array + index) = number; return array;
}

// Inputs: array, total length;
int* allocate_array_values(int* array, int t_length)
{
  for(int index = 0; index < t_length; index++)
  {
    allocate_array_value(array, index, '\0');
  }
  return array;
}

// Inputs: total length;
int* generate_empty_array(const int t_length)
{
  int* array = malloc(sizeof(array) * t_length);
  return allocate_array_values(array, t_length);
}

// Inputs: array;
int calculate_array_length(const int* array)
{
  int length = 0; while(*(array + length) != '\0')
  { length += 1; } return length;
}

// Inputs: array, total length;
int array_contains_number(int* array, int t_length,
  int number)
{
  for(int index = 0; index < t_length; index++)
  {
    if(*(array + index) == number) { return true; }
  }
  return false;
}

// Inputs: array, index;
int* switch_array_numbers(int* array, int index)
{
  int switch_value = *(array + index);
  *(array + index) = *(array + (index + 1) );
  *(array + (index + 1) ) = switch_value; return array;
}

// Inputs: array, iteration;
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

// Inputs: array, current length;
int* bubble_sort_array(int* array, const int c_length)
{
  for(int index = c_length; index >= 0; index--)
  {
    array = bubble_sort_iteration(array, index);
  }
  return array;
}

// Inputs: array, current length, number;
int* add_array_number(int* array, int c_length,
  int number)
{
  array = allocate_array_value(array,c_length,number);
  return allocate_array_value(array,c_length+1,'\0');
}

// Inputs: array, current length, start;
int* move_array_numbers(int* array, int c_length,
  int start)
{
  for(int index = start; index < c_length; index++)
  {
    array = switch_array_numbers(array, index);
  }
  return array;
}

// Inputs: array, current length, number;
int* remove_array_number(int* array, int c_length,
  int number)
{
  int start = c_length;
  for(int index = (c_length-1); index >= 0; index--)
  {
    if(*(array + index) == number) {start = index;
      break;}
  }
  array = move_array_numbers(array,c_length,start);
  return allocate_array_value(array,c_length,'\0');
}

// Inputs: array, total length, index;
int* delete_array_value(int* array, int t_length,
  int index)
{
  array = move_array_numbers(array, t_length, index);
  return allocate_array_value(array, t_length, '\0');
}

// Inputs: array, array, total length;
int compare_integer_arrays(int* first, int* second,
  int t_length)
{
  for(int index = 0; index < t_length; index++)
  {
    if(*(first + index) != *(second + index))
    { return false; }
  }
  return true;
}

/* Made by Roy Hampus Fridholm */
