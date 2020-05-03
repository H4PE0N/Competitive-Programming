
/*  This program contains functions that deals with */

#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

int calculate_binary_length(const int decimal)
{
  int length = 0; while(decimal > pow(2, length))
  { length += 1; } return length;
}

int calculate_binary_decimal(int index, int decimal)
{
  if(decimal - pow(2, index) >= 0)
  { decimal = decimal - pow(2, index); } return decimal;
}

char* allocate_binary_value(char* binary, int index,
  int decimal)
{
  if(decimal - pow(2, index) >= 0) {*(binary+index)='1';}
  else { *(binary + index) = '0'; } return binary;
}

char* allocate_binary_values(char* binary, int length,
  int decimal)
{
  for(int index = 0; index < length; index++)
  {
    binary = allocate_binary_value(binary,index,decimal);
    decimal = calculate_binary_decimal(index, decimal);
  }
  return binary;
}

char* convert_decimal_binary(const int decimal)
{
  int length = calculate_binary_length(decimal);
  char* binary = generate_empty_string(length);
  return allocate_binary_values(binary, length,
    decimal);
}

/* Made by Roy Hampus Fridholm */
