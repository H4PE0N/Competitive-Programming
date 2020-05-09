
/*  */

#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

// Input array, index, number, output array;
int allocate_array_value_test(int* i_array, int index,
  int number, int* o_array)
{
  i_array = allocate_array_value(i_array,index,number);
  int length = calculate_array_length(i_array);
  return compare_integer_arrays(i_array,o_array,length);
}

// Input array, total length, index, output array;
int delete_array_value_test(int* i_array, int length,
  int index, int* o_array)
{
  i_array = delete_array_value(i_array,length,index);
  return compare_integer_arrays(i_array,o_array,length);
}

/* Made by Roy Hampus Fridholm */
