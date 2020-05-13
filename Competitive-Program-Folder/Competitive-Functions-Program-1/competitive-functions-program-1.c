
#include <stdlib.h>
#include <stdbool.h>

// Inputs: array, index, integer;
int* allocate_array_integer(int* array, int index,
  int integer)
{
  *(array + index) = integer; return array;
}

// Inputs: array, total length;
int* allocate_array_integers(int* array, int t_length)
{
  for(int index = 0; index < t_length; index++)
  {
    allocate_array_integer(array, index, '\0');
  }
  return array;
}

// Inputs: total length;
int* generate_integer_array(const int t_length)
{
  int* array = malloc(sizeof(array) * (t_length + 1));
  return allocate_array_integers(array, t_length + 1);
}

// Inputs: array;
int calculate_array_length(const int* array)
{
  int length = 0; while(*(array + length) != '\0')
  { length += 1; } return length;
}

// Inputs: array, total length;
int array_contains_integer(int* array, int t_length,
  int integer)
{
  for(int index = 0; index < t_length; index++)
  {
    if(*(array + index) == integer) return true;
  }
  return false;
}

// Inputs: array, index;
int* switch_array_integers(int* array, int index)
{
  int switch_integer = *(array + index);
  *(array + index) = *(array + (index + 1) );
  *(array + (index + 1) ) = switch_integer;
  return array;
}

// Inputs: array, iteration;
int* bubble_sort_iteration(int* array, int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(*(array + index) > *(array + (index + 1) ))
    {
      array = switch_array_integers(array, index);
    }
  }
  return array;
}

// Inputs: array, current length;
int* bubble_sort_array(int* array, int c_length)
{
  for(int index = c_length; index >= 0; index--)
  {
    array = bubble_sort_iteration(array, index);
  }
  return array;
}

// Inputs: array, current length, integer;
int* add_array_integer(int* array, int c_length,
  int integer)
{
  array = allocate_array_integer(array, c_length,
    integer);
  return allocate_array_integer(array, (c_length + 1),
    '\0');
}

// Inputs: array, current length, start;
int* move_array_integers(int* array, int c_length,
  int start)
{
  for(int index = start; index < c_length; index++)
  {
    array = switch_array_integers(array, index);
  }
  return array;
}

// Inputs: array, current length, integer;
int* remove_array_integer(int* array, int c_length,
  int integer)
{
  int start = c_length;
  for(int index = (c_length-1); index >= 0; index--)
  {
    if(*(array + index) == integer) {start = index;
      break;}
  }
  array = move_array_integers(array,c_length,start);
  return allocate_array_integer(array,c_length,'\0');
}

// Inputs: array, total length, index;
int* delete_array_integer(int* array, int t_length,
  int index)
{
  array = move_array_integers(array, t_length, index);
  return allocate_array_integer(array, t_length,'\0');
}

// Inputs: first array, second array, total length;
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
