
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-10/\
library-functions-program-10.h"

long start_stopwatch_operation() { return time(NULL); }

int stop_stopwatch_operation(long start_time)
{
  long stop_time = calculate_current_time();
  return (int) difftime(stop_time, start_time);
}

long calculate_ending_time(long start_time,int seconds)
{
  return (start_time + seconds);
}

long calculate_current_time() { return time(NULL); }

void seconds_delay_operation(int seconds)
{
  long start_time = calculate_current_time();
  long stop_time = calculate_ending_time(start_time,
    seconds);
  while(calculate_current_time() < stop_time);
}
