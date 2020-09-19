
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int start_stopwatch_operation_test(long output)
{
  long start_time = start_stopwatch_operation();
  return (start_time == output);
}

int stop_stopwatch_operation_test(long start_time,
  int output)
{
  int difference =stop_stopwatch_operation(start_time);
  return compare_integer_variables(difference, output);
}

int calculate_current_time_test(long output)
{
  long current_time = calculate_current_time();
  return (current_time == output);
}

int seconds_delay_operation_test(int seconds,
  int output)
{
  long start_time = start_stopwatch_operation();
  seconds_delay_operation(seconds);
  int difference =stop_stopwatch_operation(start_time);
  return (difference == output);
}

int calculate_ending_time_test(long start_time,
  int seconds, long output)
{
  long ending_time = calculate_ending_time(start_time,
    seconds); return (ending_time == output);
}
