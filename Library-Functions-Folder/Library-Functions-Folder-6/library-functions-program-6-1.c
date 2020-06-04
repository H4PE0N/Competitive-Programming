
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
  return *(array + ( (length - 1) / 2) );
}

double integer_even_median(int* array, int length)
{
  array = sort_integer_array(array, length);
  return ( *(array + ( (length - 2) / 2) ) +
    *(array + ( length / 2) ) ) / 2;
}

double integer_array_median(int* array, int length)
{
  if(length % 2 != 0)
    return integer_odd_median(array, length);
  else
    return integer_even_median(array, length);
}

double integer_array_average(int* array, int length)
{
  double array_total = 0;
  for(int index = 0; index < length; index = index+1)
  {
    array_total += (double) *(array + index);
  }
  return (array_total / length);
}

int* update_typical_variables(int* typical_variables,
  int current_amount, int integer)
{
  if(current_amount > *(typical_variables + 0))
  {
    *(typical_variables + 0) = current_amount;
    *(typical_variables + 1) = integer;
  }
  return typical_variables;
}

int integer_array_typical(int* array, int length)
{
  int* typical_variables = generate_integer_array(3);
  for(int index = 0; index < length; index = index+1)
  {
    int amount = array_integer_amount(array, length,
      *(array + index));
    typical_variables = update_typical_variables(
      typical_variables, amount, *(array + index));
  }
  return *(typical_variables + 1);
}

double array_integer_frequency(int* array,int length,
  int integer)
{
  int amount = array_integer_amount(array, length,
    integer);
  return ((double) amount / (double) length);
}
