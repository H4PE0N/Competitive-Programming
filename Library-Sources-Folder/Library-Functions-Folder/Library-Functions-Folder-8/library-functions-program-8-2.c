
#include "../library-functions-headers.h"

double integer_between_integers(int first, int second)
{
  int* pair = generate_integer_pair(first, second);
  return integer_array_average(pair, 2);
}

int* inverted_fraction_variable(int* fraction)
{
  int numerator =fraction_variable_numerator(fraction);
  int denominator = fraction_variable_denominator(
    fraction);
  return generate_fraction_variable(denominator,
    numerator);
}

double convert_percent_decimal(double percent)
{
  double decimal = (percent / 100); return decimal;
}

int integer_variable_greater(int first, int second)
{
  int boolean = (first > second); return boolean;
}

void fraction_variable_stdout(int* fraction)
{
  int numerator =fraction_variable_numerator(fraction);
  int denominator = fraction_variable_denominator(
    fraction);
  printf("%d / %d\n", numerator, denominator);
}

int* convert_decimal_fraction(double decimal)
{
  int denominator = integer_power_operation(10, 6);
  int numerator = (decimal * (double) denominator);
  int* fraction = generate_fraction_variable(numerator,
    denominator);
  return smallest_fraction_form(fraction);
}

int* generate_fraction_variable(int numerator,
  int denominator)
{
  int* fraction = generate_integer_pair(numerator,
    denominator); return fraction;
}

double convert_fraction_decimal(int* fraction)
{
  int numerator =fraction_variable_numerator(fraction);
  int denominator = fraction_variable_denominator(
    fraction);
  return ((double) numerator / (double) denominator);
}

int check_integer_divisible(int first, int second)
{
  int boolean = (first % second == 0); return boolean;
}

int* convert_percent_fraction(double percent)
{
  double decimal = convert_percent_decimal(percent);
  return convert_decimal_fraction(decimal);
}

int* generate_integer_products(int integer, int amount)
{
  int* products = generate_integer_array(amount);
  for(int index = 0; index < amount; index = index + 1)
  {
    int product = (integer * (index + 1));
    products=add_array_integer(products,index,product);
  }
  return products;
}

int decimal_variable_smaller(double first,
  double second)
{
  int boolean = (first < second); return boolean;
}

int compare_fraction_variables(int* first, int* second)
{
  double f_decimal = convert_fraction_decimal(first);
  double s_decimal = convert_fraction_decimal(second);
  return compare_decimal_variables(f_decimal,
    s_decimal);
}

int fraction_variable_denominator(int* fraction)
{
  int denominator = array_index_integer(fraction, 1);
  return denominator;
}
