
#include <stdlib.h>
#include <stdbool.h>

int* allocate_array_integer(int* array, int index,
  int integer)
{
  *(array + index) = integer; return array;
}

int* allocate_array_integers(int* array, int length)
{
  for(int index = 0; index < length; index++)
  {
    allocate_array_integer(array, index, '\0');
  }
  return array;
}

int* generate_integer_array(const int length)
{
  int* array = malloc(sizeof(array) * (length + 1));
  return allocate_array_integers(array, length + 1);
}

int integer_array_length(const int* array)
{
  int length = 0; while(*(array + length) != '\0')
  { length  = (length + 1); } return length;
}

int array_contains_integer(int* array, int length,
  int integer)
{
  for(int index = 0; index < length; index++)
  {
    if(*(array + index) == integer) return true;
  }
  return false;
}

int* switch_array_integers(int* array, int index)
{
  int switch_integer = *(array + index);
  *(array + index) = *(array + (index + 1) );
  *(array + (index + 1) ) = switch_integer;
  return array;
}

int* sort_integer_iteration(int* array,int iteration)
{
  for(int index = 0; index < (iteration - 1);index++)
  {
    if(*(array + index) > *(array + (index + 1) ))
    {
      array = switch_array_integers(array, index);
    }
  }
  return array;
}

int* sort_integer_array(int* array, int length)
{
  for(int index = length; index >= 0; index--)
  {
    array = sort_integer_iteration(array, index);
  }
  return array;
}

int* add_array_integer(int* array, int length,
  int integer)
{
  array = allocate_array_integer(array, length,
    integer);
  return allocate_array_integer(array, (length + 1),
    '\0');
}

int* move_array_integers(int* array, int length,
  int start)
{
  for(int index = start; index < length; index++)
  {
    array = switch_array_integers(array, index);
  }
  return array;
}

int* remove_array_integer(int* array, int length,
  int integer)
{
  int start = length;
  for(int index = (length - 1); index >= 0; index--)
  {
    if(*(array + index) != integer) continue;
    start = index; break; 
  }
  array = move_array_integers(array, length, start);
  return allocate_array_integer(array, length, '\0');
}

int* delete_array_integer(int* array, int length,
  int index)
{
  array = move_array_integers(array, length, index);
  return allocate_array_integer(array, length,'\0');
}

int compare_integer_arrays(int* first, int* second,
  int length)
{
  for(int index = 0; index < length; index++)
  {
    if(*(first + index) != *(second + index))
    { return false; }
  }
  return true;
}

int* remove_array_integers(int* array, int integer)
{
  int length = integer_array_length(array);
  while(array_contains_integer(array,length,integer))
  {
    array = remove_array_integer(array, length,
      integer);
  }
  return array;
}
