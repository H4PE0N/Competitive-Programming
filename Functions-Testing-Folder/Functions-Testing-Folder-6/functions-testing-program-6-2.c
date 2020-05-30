
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../Functions-Testing-Folder-6/\
functions-testing-program-6.h"

int array_integer_percent_test(int* array, int length,
  int integer, double i_percent)
{
  double percent = array_integer_percent(array,length,
    integer);
  return (percent == i_percent);
}

int integer_range_between_test(int integer,int minimum,
  int maximum, int boolean)
{
  int output = integer_range_between(integer, minimum,
    maximum);
  return (output == boolean);
}

int generate_random_integer_test(int i_minimum,
  int i_maximum, int o_minimum, int o_maximum)
{
  int integer = generate_random_integer(i_minimum,
    i_maximum);
  return integer_range_between(integer, o_minimum,
    o_maximum);
}
