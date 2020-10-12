
#include "../library-functions-headers.h"

long start_stopwatch_operation() { return time(NULL); }

int stop_stopwatch_operation(long start_time)
{
  long current_time = calculate_current_time();
  return (int) difftime(current_time, start_time);
}

void seconds_delay_operation(int seconds)
{
  long start_time = calculate_current_time();
  long ending_time = calculate_ending_time(start_time,
    seconds);
  while(calculate_current_time() < ending_time);
}

long calculate_ending_time(long start_time,int seconds)
{
  return (start_time + seconds);
}

long calculate_current_time() { return time(NULL); }

double convert_minutes_to_hours(double minutes){ return minutes / 60; }

double convert_hours_to_minutes(double hours){ return hours * 60; }
