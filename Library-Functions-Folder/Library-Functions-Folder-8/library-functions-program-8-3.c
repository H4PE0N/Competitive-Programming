
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int* extend_fraction_variable(int* fraction,
  int integer)
{
  int numerator =fraction_variable_numerator(fraction);
  int denominator = fraction_variable_denominator(
    fraction);
  return generate_fraction_variable(numerator *integer,
    denominator * integer);
}

double convert_fraction_percent(int* fraction)
{
  double decimal = convert_fraction_decimal(fraction);
  return convert_decimal_percent(decimal);
}

int fraction_variable_numerator(int* fraction)
{
  int numerator = array_index_integer(fraction, 0);
  return numerator;
}

int generate_random_integer(int minimum, int maximum)
{
  return minimum + (rand() % (maximum - minimum + 1));
}

int* shorten_fraction_variable(int* fraction,
  int integer)
{
  int numerator =fraction_variable_numerator(fraction);
  int denominator = fraction_variable_denominator(
    fraction);
  if(numerator % integer != 0 || denominator % integer
    != 0) return fraction;
  return generate_fraction_variable(numerator /integer,
      denominator / integer);
}

int compare_decimal_variables(double first,
  double second)
{
  int boolean = (first == second); return boolean;
}

int decimal_variable_greater(double first,
  double second)
{
  int boolean = (first > second); return boolean;
}

int fraction_variable_greater(int* first, int* second)
{
  double f_decimal = convert_fraction_decimal(first);
  double s_decimal = convert_fraction_decimal(second);
  return decimal_variable_greater(f_decimal,s_decimal);
}

int* duplicate_fraction_variable(int* fraction)
{
  return duplicate_integer_array(fraction, 2);
}

double generate_random_decimal(double minimum,
  double maximum)
{
  double decimals=((double)rand()/(double)(RAND_MAX));
  return (decimals * (maximum - minimum)) + minimum;
}
