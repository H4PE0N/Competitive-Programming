
#include <stdlib.h>
#include <math.h>

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../Library-Functions-Folder-6/\
library-functions-program-6.h"

double array_integer_percent(int* array, int length,
  int integer)
{
  double amount = array_integer_frequency(array,
    length, integer);
  return convert_decimal_percent(amount);
}
