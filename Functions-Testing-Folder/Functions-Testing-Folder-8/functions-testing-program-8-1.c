
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
    maximum);
  return compare_integer_variables(boolean, output);
}

int convert_decimal_percent_test(double decimal,
  double output)
{
  return (convert_decimal_percent(decimal) == output);
}

int integer_power_operation_test(int base,int exponent,
  int output)
{
  int product = integer_power_operation(base,exponent);
  return compare_integer_variables(product, output);
}

int convert_percent_decimal_test(double percent,
  double output)
{
  return (convert_percent_decimal(percent) == output);
}

int check_integer_divisible_test(int first, int second,
  int output)
{
  int boolean = check_integer_divisible(first, second);
  return compare_integer_variables(boolean, output);
}

int integer_between_integers_test(int first,int second,
  double output)
{
  double integer = integer_between_integers(first,
    second);
  return compare_decimal_variables(integer, output);
}

int increase_integer_variable_test(int variable,
  int integer, int output)
{
  variable=increase_integer_variable(variable,integer);
  return compare_integer_variables(variable, output);
}

int integer_variable_greater_test(int first,int second,
  int output)
{
  int boolean = integer_variable_greater(first,second);
  return compare_integer_variables(boolean, output);
}

int integer_variable_smaller_test(int first,int second,
  int output)
{
  int boolean = integer_variable_smaller(first,second);
  return compare_integer_variables(boolean, output);
}

int compare_integer_variables_test(int first,
  int second, int output)
{
  int boolean=compare_integer_variables(first, second);
  return compare_integer_variables(boolean, output);
}

int generate_fraction_variable_test(int numerator,
  int denominator, int* output)
{
  int* fraction = generate_fraction_variable(numerator,
    denominator);
  return compare_integer_arrays(fraction, output, 2);
}
