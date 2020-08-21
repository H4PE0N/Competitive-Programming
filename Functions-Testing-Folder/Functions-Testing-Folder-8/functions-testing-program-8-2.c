
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int fraction_variable_denominator_test(int* fraction,
  int output)
{
  int denominator = fraction_variable_denominator(
    fraction); return (denominator == output);
}

int fraction_variable_numerator_test(int* fraction,
  int output)
{
  int numerator =fraction_variable_numerator(fraction);
  return (numerator == output);
}
