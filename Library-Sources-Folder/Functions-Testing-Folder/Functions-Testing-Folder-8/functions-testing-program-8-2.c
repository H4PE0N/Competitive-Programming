
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int fraction_variable_denominator_test(int* fraction,
  int output)
{
  int denominator = fraction_variable_denominator(
    fraction);
  return compare_integer_variables(denominator,output);
}

int fraction_variable_numerator_test(int* fraction,
  int output)
{
  int numerator =fraction_variable_numerator(fraction);
  return compare_integer_variables(numerator, output);
}

int convert_fraction_decimal_test(int* fraction,
  double output)
{
  double decimal = convert_fraction_decimal(fraction);
  return compare_decimal_variables(decimal, output);
}

int convert_decimal_fraction_test(double decimal,
  int* output)
{
  int* fraction = convert_decimal_fraction(decimal);
  return compare_fraction_variables(fraction, output);
}

int convert_percent_fraction_test(double percent,
  int* output)
{
  int* fraction = convert_percent_fraction(percent);
  return compare_fraction_variables(fraction, output);
}

int convert_fraction_percent_test(int* fraction,
  double output)
{
  double percent = convert_fraction_percent(fraction);
  return compare_decimal_variables(percent, output);
}

int shorten_fraction_variable_test(int* fraction,
  int integer, int* output)
{
  fraction = shorten_fraction_variable(fraction, integer);
  return compare_integer_arrays(fraction, output, 2);
}

int extend_fraction_variable_test(int* fraction,
  int integer, int* output)
{
  fraction = extend_fraction_variable(fraction, integer);
  return compare_integer_arrays(fraction, output, 2);
}

int compare_decimal_variables_test(double first,
  double second, int output)
{
  int boolean = compare_decimal_variables(first, second);
  return compare_integer_variables(boolean, output);
}

int duplicate_fraction_variable_test(int* fraction,
  int* output)
{
  int* doublet = duplicate_fraction_variable(fraction);
  return compare_integer_arrays(doublet, output, 2);
}
