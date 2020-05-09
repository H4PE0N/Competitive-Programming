
/* This program contains functions that deals with
arrays and calculates thingd using it's data. */

#include <stdlib.h>
#include <stdbool.h>

int* allocate_array_value(int* array, int index,
  int number)
{
  *(array + index) = number; return array;
}

// Function takes in total length of array;
int* allocate_array_values(int* array, int t_length)
{
  for(int index = 0; index < t_length; index++)
  {
    allocate_array_value(array, index, '\0');
  }
  return array;
}

// Function takes in total length of array;
int* generate_empty_array(const int t_length)
{
  int* array = malloc(sizeof(array) * t_length);
  return allocate_array_values(array, t_length);
}

int calculate_array_length(const int* array)
{
  int length = 0; while(*(array + length) != '\0')
  { length += 1; } return length;
}

// Function takes in total or current length of array;
int array_contains_number(int* array, int a_length,
  int number)
{
  for(int index = 0; index < a_length; index++)
  {
    if(*(array + index) == number) { return true; }
  }
  return false;
}

int* switch_array_numbers(int* array, int index)
{
  int switch_value = *(array + index);
  *(array + index) = *(array + (index + 1) );
  *(array + (index + 1) ) = switch_value; return array;
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

// Function takes in current length of array;
int* bubble_sort_array(int* array, const int c_length)
{
  for(int index = c_length; index >= 0; index--)
  {
    array = bubble_sort_iteration(array, index);
  }
  return array;
}

// Function takes in current length of array;
int* add_array_number(int* array, int c_length,
  int number)
{
  array = allocate_array_value(array,c_length,number);
  return allocate_array_value(array,c_length+1,'\0');
}

// Function takes in current length of array;
int* move_array_numbers(int* array, int c_length,
  int start)
{
  for(int index = start; index < c_length; index++)
  {
    array = switch_array_numbers(array, index);
  }
  return array;
}

// Function takes in current length of array;
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

// Function takes in total length of array;
int* delete_array_value(int* array, int t_length,
  int index)
{
  array = move_array_numbers(array, t_length, index);
  return allocate_array_value(array, t_length, '\0');
}

// Function takes in current length of array;
int compare_integer_arrays(int* first, int* second,
  int c_length)
{
  for(int index = 0; index < c_length; index++)
  {

    if(*(first + index) != *(second + index))
    { return false; }
  }
  return true;
}

/* Made by Roy Hampus Fridholm */
