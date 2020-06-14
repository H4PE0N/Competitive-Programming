
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int integer_range_between_test(int integer,int minimum,
  int maximum, int boolean)
{
  int output = integer_range_between(integer, minimum,
    maximum);
  return (output == boolean);
}

int convert_decimal_percent_test(double decimal,
  double percent)
{
  return convert_decimal_percent(decimal) == percent;
}

int integer_power_operation_test(int integer,int power,
  int i_product)
{
  int product = integer_power_operation(integer,power);
  return (product == i_product);
}

int convert_percent_decimal_test(double percent,
  double decimal)
{
  return convert_percent_decimal(percent) == decimal;
}

int integer_divisible_by_two_test(int integer,
  int boolean)
{
  int output = integer_divisible_by_two(integer);
  return (output == boolean);
}

int integer_between_integers_test(int first,int second,
  double i_integer)
{
  double integer = integer_between_integers(first,
    second);
  return (integer == i_integer);
}
