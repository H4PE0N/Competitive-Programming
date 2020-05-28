
#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

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

double integer_array_average(int* array,int length)
{
  double array_total = 0;
  for(int index = 0; index < length; index += 1)
  {
    array_total += (double) *(array + index);
  }
  return (array_total / length);
}

int update_integer_value(int** hashmap, int index,
  int common_value)
{
  if(*(*(hashmap + index) + 1) > common_value)
    return *(*(hashmap + index) + 1);
  else return common_value;
}

int update_integer_key(int** hashmap, int index,
  int common_value, int common_key)
{
  if(*(*(hashmap + index) + 1) > common_value)
    return *(*(hashmap + index) + 0);
  else return common_key;
}

int integer_common_value(int** hashmap, int length)
{
  int common_key = -1, common_value = hashmap[0][1];
  for(int index = 0; index < length; index++)
  {
    common_value = update_integer_value(hashmap,
      index, common_value);
    common_key = update_integer_key(hashmap,index,
      common_value, common_key);
  }
  return common_key;
}

int integer_array_typical(int* array, int i_length)
{
  int** hashmap = convert_array_hashmap(array,
    i_length);
  int length = integer_hashmap_length(hashmap);
  return integer_common_value(hashmap, length);
}

double convert_decimal_percent(double decimal)
{
  double percent = (decimal * 100); return percent;
}

double convert_percent_decimal(double percent)
{
  double decimal = (percent / 100); return decimal;
}

double array_integer_frequence(int* array,
  int length, int integer)
{
  int amount = array_integer_amount(array, length,
    integer);
  return ((double) amount / (double) length);
}

double array_integer_percent(int* array,int length,
  int integer)
{
  double amount = array_integer_frequence(array,
    length, integer);
  return convert_decimal_percent(amount);
}
