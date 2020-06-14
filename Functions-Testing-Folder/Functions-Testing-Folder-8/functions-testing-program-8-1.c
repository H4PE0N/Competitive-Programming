
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
  int maximum, int output)
{
  int boolean = integer_range_between(integer, minimum,
    maximum); return (boolean == output);
}

int convert_decimal_percent_test(double decimal,
  double output)
{
  return convert_decimal_percent(decimal) == output;
}

int integer_power_operation_test(int integer,int power,
  int output)
{
  int product = integer_power_operation(integer,power);
  return (product == output);
}

int convert_percent_decimal_test(double percent,
  double output)
{
  return convert_percent_decimal(percent) == output;
}

int integer_divisible_by_two_test(int integer,
  int output)
{
  int boolean = integer_divisible_by_two(integer);
  return (boolean == output);
}

int integer_between_integers_test(int first,int second,
  double output)
{
  double integer = integer_between_integers(first,
    second); return (integer == output);
}

int increase_integer_variable_test(int integer,
  int output)
{
  return increase_integer_variable(integer) == output;
}
