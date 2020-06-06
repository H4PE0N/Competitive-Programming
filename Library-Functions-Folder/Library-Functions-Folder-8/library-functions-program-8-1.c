
#include <stdlib.h>
#include <string.h>

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

int integer_range_between(int integer, int minimum,
  int maximum)
{
  return (integer <= maximum && integer >= minimum);
}

int generate_random_integer(int minimum, int maximum)
{
  return minimum + (rand() % (maximum - minimum + 1));
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

double convert_decimal_percent(double decimal)
{
  double percent = (decimal * 100); return percent;
}

double convert_percent_decimal(double percent)
{
  double decimal = (percent / 100); return decimal;
}

int integer_divisible_by_two(int integer)
{
  int output = (integer % 2 == 0); return output;
}
