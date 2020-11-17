
#include "../library-functions-headers.h"

int least_common_denominator(int* first, int* second)
{
  int first_d = fraction_variable_denominator(first);
  int second_d = fraction_variable_denominator(second);
  return smallest_common_multiple(first_d, second_d);
}

double convert_decimal_percent(double decimal)
{
  double percent = (decimal * 100); return percent;
}

int increase_integer_variable(int variable,int integer)
{
  variable = (variable + integer); return variable;
}

int integer_range_between(int integer, int minimum,
  int maximum)
{
  int smaller = !integer_variable_smaller(integer,
    minimum);
  int greater = !integer_variable_greater(integer,
    maximum); return (smaller && greater);
}

int* smallest_fraction_form(int* fraction)
{
  if(integer_variable_greater(fraction[0],fraction[1]))
  {
    int multiple =greatest_common_multiple(fraction[0],
      fraction[1]);
    return shorten_fraction_variable(fraction,
      multiple);
  }
  int multiple = greatest_common_multiple(fraction[1],
    fraction[0]);
  return shorten_fraction_variable(fraction, multiple);
}

int fraction_variable_smaller(int* first, int* second)
{
  double f_decimal = convert_fraction_decimal(first);
  double s_decimal = convert_fraction_decimal(second);
  return decimal_variable_smaller(f_decimal,s_decimal);
}

int compare_integer_variables(int first, int second)
{
  int boolean = (first == second); return boolean;
}

int* generate_random_fraction(double minimum,
  double maximum)
{
  double decimal = generate_random_decimal(minimum,
    maximum); return convert_decimal_fraction(decimal);
}

int integer_variable_smaller(int first, int second)
{
  int boolean = (first < second); return boolean;
}

char generate_random_character(int minimum,int maximum)
{
  char character = generate_random_integer(minimum,
    maximum); return character;
}

int character_variable_greater(char first, char second)
{
  int boolean = (first > second); return boolean;
}

int* duplicate_fraction_variable(int* fraction)
{
  return duplicate_integer_array(fraction, 2);
}

int character_range_between(char character,int minimum,
  int maximum)
{
  int smaller = !character_variable_smaller(character,
    minimum);
  int greater = !character_variable_greater(character,
    maximum); return (smaller && greater);
}
