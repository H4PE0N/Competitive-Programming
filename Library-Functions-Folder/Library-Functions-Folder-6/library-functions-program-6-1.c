
#include <stdlib.h>
#include <math.h>

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../Library-Functions-Folder-6/\
library-functions-program-6.h"

double integer_odd_median(int* array, int length)
{
  array = sort_integer_array(array, length);
  return array_index_integer(array, (length - 1) / 2);
}

double integer_even_median(int* array, int length)
{
  array = sort_integer_array(array, length);
  return (array_index_integer(array, (length -1) / 2) +
    array_index_integer(array, length / 2 ) ) / 2;
}

double integer_array_median(int* array, int length)
{
  if(integer_divisible_by_two(length))
  {
    return integer_odd_median(array, length);
  }
  return integer_even_median(array, length);
}

double integer_array_average(int* array, int length)
{
  double array_total = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    array_total += (double) array_index_integer(array,
      index);
  }
  return (array_total / length);
}

int greater_integer_amount(int current, int typical)
{
  int output = (current > typical); return output;
}

int* update_typical_variables(int*variables,int amount,
  int integer)
{
  int typical_amount=array_index_integer(variables, 0);
  if(greater_integer_amount(amount, typical_amount))
  {
    *(variables + 0) = amount; *(variables + 1) =
      integer;
  }
  return variables;
}

int integer_array_typical(int* array, int length)
{
  int* variables = generate_integer_array(2);
  for(int index = 0; index < length; index = index + 1)
  {
    int amount = array_integer_amount(array, length,
      array_index_integer(array, index)); variables =
    update_typical_variables(variables, amount,
      array_index_integer(array, index));
  }
  return array_index_integer(variables, 1);
}

double array_integer_frequency(int* array, int length,
  int integer)
{
  int amount = array_integer_amount(array, length,
    integer);
  return ((double) amount / (double) length);
}
