
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

int* inverted_fraction_variable(int* fraction)
{
  int numerator =fraction_variable_numerator(fraction);
  int denominator = fraction_variable_denominator(
    fraction);
  return generate_fraction_variable(denominator,
    numerator);
}
