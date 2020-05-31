
#include <stdlib.h>
#include <stdbool.h>

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

int* remove_array_integer(int* array, int length,
  int integer)
{
  int start = length;
  for(int index = (length - 1); index >= 0; index--)
  {
    if(*(array + index) != integer) continue;
    start = index; break;
  }
  return delete_array_integer(array, length, start);
}

int compare_integer_arrays(int* first, int* second,
  int length)
{
  for(int index = 0; index < length; index += 1)
  {
    if(*(first + index) != *(second + index))
      return false;
  }
  return true;
}

int* remove_array_integers(int* array, int length,
  int integer)
{
  while(array_contains_integer(array,length,integer))
  {
    array = remove_array_integer(array, length,
      integer);
  }
  return array;
}

int array_integer_amount(int* array, int length,
  int number)
{
  int amount = 0;
  for(int index = 0; index < length; index = index+1)
  {
    if(*(array + index) == number) amount = amount+1;
  }
  return amount;
}

int integers_range_between(int* array, int minimum,
  int maximum)
{
  int length = integer_array_length(array);
  for(int index = 0; index < length; index = index+1)
  {
    if(!integer_range_between(*(array + index),
      minimum, maximum)) return false;
  }
  return true;
}

int* generate_random_integers(int length,int minimum,
  int maximum)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index+1)
  {
    array = allocate_array_integer(array, index,
      generate_random_integer(minimum, maximum));
  }
  return array;
}

int* switch_array_integers(int* array, int first,
  int second)
{
  int switch_integer = array[first]; array[first] =
    array[second]; array[second] = switch_integer;
  return array;
}

int* shuffle_integer_array(int* array, int length)
{
  for(int index = 0; index < length; index = index+1)
  {
    int random_index = generate_random_integer(0,
      length);
    array = switch_array_integers(array, index,
      random_index);
  }
  return array;
}
