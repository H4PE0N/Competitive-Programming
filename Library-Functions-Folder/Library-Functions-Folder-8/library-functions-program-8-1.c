
#include <stdlib.h>
#include <string.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int integer_range_between(int integer, int minimum,
  int maximum)
{
  return (!integer_variable_greater(integer, maximum)
    && !integer_variable_smaller(integer, minimum));
}

double convert_decimal_percent(double decimal)
{
  double percent = (decimal * 100); return percent;
}

int increase_integer_variable(int variable)
{
  variable = (variable + 1); return variable;
}

int integer_power_operation(int integer, int power)
{
  int product = 1;
  for(int index = 0; index < power; index = index + 1)
  {
    product = (product * integer);
  }
  return product;
}

int compare_integer_variables(int first, int second)
{
  int boolean = (first == second); return boolean;
}

int integer_variable_smaller(int first, int second)
{
  int boolean = (first < second); return boolean;
}

int generate_random_integer(int minimum, int maximum)
{
  return minimum + (rand() % (maximum - minimum + 1));
}

double convert_percent_decimal(double percent)
{
  double decimal = (percent / 100); return decimal;
}

int integer_variable_greater(int first, int second)
{
  int boolean = (first > second); return boolean;
}

int integer_variable_odd(int integer)
{
  return !check_integer_divisible(integer, 2);
}

double integer_between_integers(int first, int second)
{
  int* vector = generate_integer_vector(first,second);
  return integer_array_average(vector, 2);
}

int integer_variable_even(int integer)
{
  return check_integer_divisible(integer, 2);
}

int check_integer_divisible(int first, int second)
{
  int output = (first % second == 0); return output;
}

int* generate_fraction_variable(int numerator,
  int denominator)
{
  int* fraction = generate_integer_vector(numerator,
    denominator); return fraction;
}
