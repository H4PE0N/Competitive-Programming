
#include <stdlib.h>
#include <math.h>

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../Library-Functions-Folder-6/\
library-functions-program-6.h"

double array_integer_percent(int* array,int length,
  int integer)
{
  double amount = array_integer_frequency(array,
    length, integer);
  return convert_decimal_percent(amount);
}

int integer_range_between(int integer, int minimum,
  int maximum)
{
  return (integer <= maximum && integer >= minimum);
}

int generate_random_integer(int minimum,int maximum)
{
  return (minimum + (rand() % (maximum - minimum)));
}

int integer_power_operation(int integer, int power)
{
  int product = 1;
  for(int index = 0; index < power; index = index+1)
  {
    product = (product * integer);
  }
  return product;
}
