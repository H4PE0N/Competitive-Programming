
#include "../library-functions-headers.h"

int* allocate_array_integers(int* array, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    array = allocate_array_integer(array, index, '\0');
  }
  return array;
}

int* allocate_array_integer(int* array, int index,
  int integer)
{
  *(array + index) = integer; return array;
}

int* sort_integer_iteration(int* array, int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(array_integer_smaller(array, index, index + 1))
      continue;
    array = switch_adjacent_integers(array, index);
  }
  return array;
}

int* generate_integer_array(int length)
{
  int* array = malloc(sizeof(array) * (length + 1));
  return allocate_array_integers(array, length + 1);
}

int integer_array_length(int* array)
{
  int length = 0;
  while(array_index_integer(array, length) != '\0')
  {
    length = increase_integer_variable(length, 1);
  }
  return length;
}

int* switch_adjacent_integers(int* array, int index)
{
  return switch_array_integers(array,index, index + 1);
}

int* add_array_integer(int* array, int length,
  int integer)
{
  array = allocate_array_integer(array,length,integer);
  return array;
}

int array_contains_integer(int* array, int length,
  int integer)
{
  for(int index = 0; index < length; index = index + 1)
  {
    int current = array_index_integer(array, index);
    if(compare_integer_variables(integer, current))
      return true;
  }
  return false;
}

int* move_array_integers(int* array, int length,
  int start)
{
  for(int index = start; index < length; index += 1)
  {
    array = switch_adjacent_integers(array, index);
  }
  return array;
}

int* delete_array_integer(int* array, int length,
  int index)
{
  array = move_array_integers(array, length, index);
  return allocate_array_integer(array, length, '\0');
}

int* sort_integer_array(int* array, int length)
{
  for(int index = length; index >= 0; index =index - 1)
  {
    array = sort_integer_iteration(array, index);
  }
  return array;
}
