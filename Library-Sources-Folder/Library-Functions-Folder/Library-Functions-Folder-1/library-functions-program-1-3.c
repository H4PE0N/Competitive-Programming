
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../library-functions-headers.h"

void integer_array_stdout(int* array, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    printf("%d ", array_index_integer(array, index));
  }
  printf("\n");
}

int compare_array_content(int* first, int* second,
  int length)
{
  first = sort_integer_array(first, length);
  second = sort_integer_array(second, length);
  return compare_integer_arrays(first, second, length);
}

int* duplicate_integer_array(int* array, int length)
{
  int* doublet = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    doublet = allocate_array_integer(doublet, index,
      array_index_integer(array, index));
  }
  return doublet;
}

int array_index_integer(int* array, int index)
{
  int integer = *(array + index); return integer;
}

int* shuffle_integer_array(int* array, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    int random = generate_random_integer(0,length - 1);
    array = switch_array_integers(array, index,random);
  }
  return array;
}

int* generate_integer_vector(int first, int second)
{
  int* vector = generate_integer_array(2);
  vector = allocate_array_integer(vector, 0, first);
  return allocate_array_integer(vector, 1, second);
}

int integer_array_total(int* array, int length)
{
  int total = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    total = (total + array_index_integer(array,index));
  }
  return total;
}

int compare_array_integers(int* array, int first,
  int second)
{
  int integer = array_index_integer(array, first);
  return (integer==array_index_integer(array, second));
}

int compare_arrays_integer(int* first, int* second,
  int index)
{
  int integer = array_index_integer(first, index);
  return (integer==array_index_integer(second, index));
}

int array_integer_greater(int* array, int first,
  int second)
{
  int integer = array_index_integer(array, first);
  return integer > array_index_integer(array, second);
}
