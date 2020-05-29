
#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Folder-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Folder-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Folder-3/\
competitive-functions-program-3.h"

#include "../Competitive-Functions-Folder-6/\
competitive-functions-program-6.h"

double array_integer_percent(int* array,int length,
  int integer)
{
  double amount = array_integer_frequency(array,
    length, integer);
  return convert_decimal_percent(amount);
}
