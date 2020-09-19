
#include <stdlib.h>
#include <math.h>

#include "../library-functions-headers.h"

int array_integers_sequences(int* array, int length)
{
  int sequences = 1;
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    sequences = (sequences * integer);
  }
  return sequences;
}

double array_integer_percent(int* array, int length,
  int integer)
{
  double amount = array_integer_frequency(array,length,
    integer); return convert_decimal_percent(amount);
}
