
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-6/\
competitive-functions-program-6.h"

int integer_odd_median_test(int* array, int length,
  double i_median)
{
  int median = integer_odd_median(array, length);
  return (median == i_median);
}

int integer_even_median_test(int* array, int length,
  double i_median)
{
  int median = integer_even_median(array, length);
  return (median == i_median);
}

int integer_array_median_test(int* array,int length,
  double i_median)
{
  int median = integer_array_median(array, length);
  return (median == i_median);
}

int integer_array_average_test(int* array,
  int length, double i_average)
{
  int average = integer_array_average(array, length);
  return (average == i_average);
}

int update_integer_value_test(int** hashmap, int index,
  int i_value, int o_value)
{
  i_value = update_integer_value(hashmap, index,
    i_value);
  return (i_value == o_value);
}

int update_integer_key_test(int** hashmap, int index,
  int value, int i_key, int o_key)
{
  i_key = update_integer_key(hashmap, index, value,
    i_key);
  return (i_key == o_key);
}

int integer_common_value_test(int** hashmap,int length,
  int i_value)
{
  int value = integer_common_value(hashmap, length);
  return (value == i_value);
}

int integer_array_typical_test(int* array, int length,
  int i_typical)
{
  int typical = integer_array_typical(array, length);
  return (typical == i_typical);
}

int convert_decimal_percent_test(double decimal,
  double percent)
{
  return convert_decimal_percent(decimal) == percent;
}

int convert_percent_decimal_test(double percent,
  double decimal)
{
  return convert_percent_decimal(percent) == decimal;
}

int array_integer_frequence_test(int* array,int length,
  int integer, double i_amount)
{
  double amount = array_integer_frequence(array,length,
    integer);
  return (amount == i_amount);
}

int array_integer_percent_test(int* array, int length,
  int integer, double i_percent)
{
  double percent = array_integer_percent(array,length,
    integer);
  return (percent == i_percent);
}
