
/*  */

#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

// Function takes in the number, length and index;
int allocate_array_value_test(int number, int length,
  int index)
{
  int* array = generate_empty_array(length);
  array = allocate_array_value(array, index, number);
  return (*(array + index) == number);
}

// Function takes in the number, length and index;
int delete_array_value_test(int number, int length,
  int index)
{
  int* array = generate_empty_array(length);
  array = allocate_array_value(array, index, number);
  array = delete_array_value(array, length, index);
  return !array_contains_number(array,length,number);
}

/* Made by Roy Hampus Fridholm */
