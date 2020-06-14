
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
  return (integer <= maximum && integer >= minimum);
}

double convert_decimal_percent(double decimal)
{
  double percent = (decimal * 100); return percent;
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

int increase_integer_variable(int integer)
{
  integer = (integer + 1); return integer;
}

int generate_random_integer(int minimum, int maximum)
{
  return minimum + (rand() % (maximum - minimum + 1));
}

double convert_percent_decimal(double percent)
{
  double decimal = (percent / 100); return decimal;
}

int integer_divisible_by_two(int integer)
{
  int output = (integer % 2 == 0); return output;
}

double integer_between_integers(int first, int second)
{
  int* vector = generate_integer_vector(first,second);
  return integer_array_average(vector, 2);
}
