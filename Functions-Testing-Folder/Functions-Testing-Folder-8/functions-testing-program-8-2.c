
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int fraction_variable_denominator_test(int* fraction,
  int output)
{
  int denominator = fraction_variable_denominator(
    fraction); return (denominator == output);
}

int fraction_variable_numerator_test(int* fraction,
  int output)
{
  int numerator =fraction_variable_numerator(fraction);
  return (numerator == output);
}

int convert_fraction_decimal_test(int* fraction,
  double output)
{
  double decimal = convert_fraction_decimal(fraction);
  return (decimal == output);
}

int convert_decimal_fraction_test(double decimal,
  int* output)
{
  int* fraction = convert_decimal_fraction(decimal);
  return compare_integer_arrays(fraction, output, 2);
  // This will change to be: compare_fraction_variables
}

int convert_percent_fraction_test(double percent,
  int* output)
{
  int* fraction = convert_percent_fraction(percent);
  return compare_integer_arrays(fraction, output, 2);
  // This will change to be: compare_fraction_variables
}

int convert_fraction_percent_test(int* fraction,
  double output)
{
  double percent = convert_fraction_percent(fraction);
  return (percent == output);
}

int shorten_fraction_variable_test(int* fraction,
  int integer, int* output)
{
  fraction = shorten_fraction_variable(fraction, integer);
  return compare_integer_arrays(fraction, output, 2);
  // This will change to be: compare_fraction_variables
}

int extend_fraction_variable_test(int* fraction,
  int integer, int* output)
{
  fraction = extend_fraction_variable(fraction, integer);
  return compare_integer_arrays(fraction, output, 2);
  // This will change to be: compare_fraction_variables
}

int compare_decimal_variables_test(double first,
  double second, int output)
{
  int boolean = compare_decimal_variables(first, second);
  return (boolean == output);
}

int compare_percent_variables_test(double first,
  double second, int output)
{
  int boolean = compare_percent_variables(first, second);
  return (boolean == output);
}
