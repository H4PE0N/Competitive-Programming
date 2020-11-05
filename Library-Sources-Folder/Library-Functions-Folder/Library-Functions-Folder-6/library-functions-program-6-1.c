
#include "../library-functions-headers.h"

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
  if(integer_variable_greater(amount, typical_amount))
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

int array_integers_sequences(int* array, int length)
{
  int sequences = 1;
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    sequences = (sequences * integer);
  }
  return sequences;
}

double array_integer_percent(int* array, int length,
  int integer)
{
  double amount = array_integer_frequency(array,length,
    integer);
  double percent = convert_decimal_percent(amount);
  return percent;
}
