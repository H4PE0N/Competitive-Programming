
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

double generate_random_decimal(double minimum,
  double maximum)
{
  double decimals=((double)rand()/(double)(RAND_MAX));
  return (decimals * (maximum - minimum)) + minimum;
}

int percent_variable_smaller(double first,
  double second)
{
  int boolean = (first < second); return boolean;
}

int percent_variable_greater(double first,
  double second)
{
  int boolean = (first > second); return boolean;
}

double generate_random_percent(double minimum,
  double maximum)
{
  double decimals=((double)rand()/(double)(RAND_MAX));
  return (decimals * (maximum - minimum)) + minimum;
}
