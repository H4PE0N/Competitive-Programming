
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

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

int integer_range_between_test(int integer,int minimum,
  int maximum, int boolean)
{
  int output = integer_range_between(integer, minimum,
    maximum);
  return (output == boolean);
}

int generate_random_integer_test(int i_minimum,
  int i_maximum, int o_minimum, int o_maximum)
{
  int integer = generate_random_integer(i_minimum,
    i_maximum);
  return integer_range_between(integer, o_minimum,
    o_maximum);
}

int integer_power_operation_test(int integer,int power,
  int i_product)
{
  int product = integer_power_operation(integer,power);
  return (product == i_product);
}

int integer_divisible_by_two_test(int integer,
  int boolean)
{
  int output = integer_divisible_by_two(integer);
  return (output == boolean);
}
