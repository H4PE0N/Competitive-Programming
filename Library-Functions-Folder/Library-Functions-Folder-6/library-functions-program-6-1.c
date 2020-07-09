
#include <stdlib.h>
#include <math.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

double integer_array_average(int* array, int length)
{
  int total = integer_array_total(array, length);
  return ( (double) total / (double) length);
}

double integer_odd_median(int* array, int length)
{
  array = sort_integer_array(array, length);
  return array_index_integer(array, (length - 1) / 2);
}

double array_integer_frequency(int* array, int length,
  int integer)
{
  int amount = array_integer_amount(array, length,
    integer); return (double) amount / (double) length;
}

double integer_even_median(int* array, int length)
{
  array = sort_integer_array(array, length);
  int index = (length - 1) / 2;
  int first = array_index_integer(array, index);
  int second = array_index_integer(array, index + 1);
  return integer_between_integers(first, second);
}

int* update_typical_variables(int*variables,int amount,
  int integer)
{
  int typical_amount=array_index_integer(variables, 0);
  if(integer_greater_than(amount, typical_amount))
  {
    variables = allocate_array_integer(variables, 0,
      amount);
    variables = allocate_array_integer(variables, 1,
      integer);
  }
  return variables;
}

double integer_array_median(int* array, int length)
{
  if(check_integer_divisible(length, 2))
  {
    return integer_even_median(array, length);
  }
  return integer_odd_median(array, length);
}

int integer_array_typical(int* array, int length)
{
  int* variables = generate_integer_array(2);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    int amount = array_integer_amount(array, length,
      integer);
    variables = update_typical_variables(variables,
      amount, integer);
  }
  return array_index_integer(variables, 1);
}
