
#include "../library-functions-headers.h"

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

int convert_character_integer(char character)
{
  if(character_range_between(character, INT_MIN,
    INT_MAX)) return character; else return INT_MIN;
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

char convert_integer_character(int integer)
{
  if(integer_range_between(integer, CHAR_MIN,CHAR_MAX))
    return integer; else return CHAR_MIN;
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

int character_variable_smaller(char first, char second)
{
  int boolean = (first < second); return boolean;
}

int compare_character_variables(char first,char second)
{
  int boolean = (first == second); return boolean;
}
