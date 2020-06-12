
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

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int update_typical_variables_test(int* i_variables,
  int current_amount, int integer, int* o_variables)
{
  i_variables = update_typical_variables(i_variables,
    current_amount, integer);
  return compare_integer_arrays(i_variables,
    o_variables, 2);
}

int integer_array_typical_test(int* array, int length,
  int i_typical)
{
  int typical = integer_array_typical(array, length);
  return (typical == i_typical);
}

int array_integer_frequency_test(int* array,int length,
  int integer, double i_amount)
{
  double amount = array_integer_frequency(array,length,
    integer);
  return (amount == i_amount);
}

int array_integer_percent_test(int* array, int length,
  int integer, double i_percent)
{
  double percent = array_integer_percent(array, length,
    integer);
  return (percent == i_percent);
}

int integer_array_median_test(int* array, int length,
  double i_median)
{
  int median = integer_array_median(array, length);
  return (median == i_median);
}

int integer_array_average_test(int* array, int length,
  double i_average)
{
  int average = integer_array_average(array, length);
  return (average == i_average);
}

int greater_integer_amount_test(int current,
  int typical, int boolean)
{
  int output = greater_integer_amount(current,typical);
  return (output == boolean);
}

int integer_odd_median_test(int* array, int length,
  double i_median)
{
  int median = integer_odd_median(array, length);
  return (median == i_median);
}

int integer_even_median_test(int* array, int length,
  double i_median)
{
  int median = integer_even_median(array, length);
  return (median == i_median);
}

int array_integers_sequences_test(int*array,int length,
  int i_sequences)
{
  int sequences = array_integers_sequences(array,
    length);
  return (sequences == i_sequences);
}
