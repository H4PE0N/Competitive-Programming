
#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

// Inputs: binary, total length, decimal;
int binary_decimal_enough(char* binary, int t_length,
  int decimal)
{
  int c_length = calculate_string_length(binary);
  return decimal - pow(2, (t_length-1-c_length)) >= 0;
}

// Inputs: binary, total length, decimal;
int reduce_binary_decimal(char* binary, int t_length,
  int decimal)
{
  int index=t_length-calculate_string_length(binary);
  if(binary_decimal_enough(binary, t_length + 1,
    decimal))
  { return decimal - pow(2, index); } return decimal;
}

// Inputs: binary, total length, decimal;
char* allocate_binary_bit(char* binary, int t_length,
  int decimal)
{
  int c_length = calculate_string_length(binary);
  if(binary_decimal_enough(binary, t_length, decimal))
  {
    return add_string_character(binary,c_length,'1');
  }
  return add_string_character(binary, c_length, '0');
}

// Inputs: binary, total length, decimal;
char* allocate_binary_bits(char* binary,int t_length,
  int decimal)
{
  for(int index = 0; index < t_length; index++)
  {
    binary = allocate_binary_bit(binary, t_length,
      decimal); decimal =
   reduce_binary_decimal(binary, t_length, decimal);
  }
  return binary;
}

// Inputs: decimal;
int calculate_real_length(const int decimal)
{
  int length = 0; while(decimal > pow(2, length))
  { length = (length + 1); } return length;
}

// Inputs: decimal;
int calculate_nearest_length(const int decimal)
{
  int length = calculate_real_length(decimal);
  int index = 2; while(length > pow(2, index))
  { index = (index + 1); } return pow(2, index);
}

// Inputs: decimal;
char* convert_decimal_binary(const int decimal)
{
  int length = calculate_nearest_length(decimal);
  char* binary = generate_empty_string(length);
  return allocate_binary_bits(binary,length,decimal);
}

// Inputs: character;
char* convert_character_binary(char character)
{
  return convert_decimal_binary(character);
}

// Inputs: binary, index, decimal;
int calculate_decimal_binary(char* binary, int index,
  int decimal)
{
  int length = calculate_string_length(binary);
  if(*(binary + index) == '1')
  {
    return decimal + pow(2, (length - (index + 1) ));
  }
  return decimal;
}

// Inputs: binary;
int convert_binary_decimal(char* binary)
{
  int length=calculate_string_length(binary),decimal=0;
  for(int index = 0; index < length; index++)
  {
    decimal = calculate_decimal_binary(binary, index,
      decimal);
  }
  return decimal;
}
