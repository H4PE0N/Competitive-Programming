
/* This program contains functions that test the
functions in file competitive-functions-program-7.h */

#include <stdlib.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

#include "../Competitive-Functions-Program-7/\
competitive-functions-program-7.h"

// Inputs: input binary, total length, output binary;
int binary_left_shifting_test(char*i_binary,int t_length,
  char* o_binary)
{
  i_binary = binary_left_shifting(i_binary, t_length);
  return compare_strings_together(i_binary, o_binary,
    t_length);
}

// Inputs: input binary, total length, output binary;
int binary_right_shifting_test(char*i_binary,int t_length,
  char* o_binary)
{
  i_binary = binary_right_shifting(i_binary, t_length);
  return compare_strings_together(i_binary, o_binary,
    t_length);
}

/* Inputs: first binary, second binary, total length,
output binary; */
int binary_and_opperation_test(char* first, char* second,
  int t_length, char* o_binary)
{
  char* binary = binary_and_opperation(first, second,
    t_length);
  return compare_strings_together(binary, o_binary,
    t_length);
}

/* Inputs: first binary, second binary, total length,
output binary; */
int binary_or_opperation_test(char* first, char* second,
  int t_length, char* o_binary)
{
  char* binary = binary_or_opperation(first, second,
    t_length);
  return compare_strings_together(binary, o_binary,
    t_length);
}

/* Inputs: first binary, second binary, total length,
output binary; */
int binary_xor_opperation_test(char* first, char* second,
  int t_length, char* o_binary)
{
  char* binary = binary_xor_opperation(first, second,
    t_length);
  return compare_strings_together(binary, o_binary,
    t_length);
}

// Inputs: input binary, total length, output binary;
int binary_not_opperation_test(char* i_binary,
  int t_length, char* o_binary)
{
  i_binary = binary_not_opperation(i_binary, t_length);
  return compare_strings_together(i_binary, o_binary,
    t_length);
}

/* Made by Roy Hampus Fridholm */
