
/* This program contains functions that deals with
binary strings and bitwise operations. */

#include <stdlib.h>
#include <string.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

#include "../Competitive-Functions-Program-5/\
competitive-functions-program-5.h"

// Function takes in total length of binary;
char* binary_left_shifting(char* binary, int t_length)
{
  char* new_binary = generate_empty_string(t_length);
  for(int index = 1; index < t_length; index++)
  {
    new_binary = add_string_character(new_binary,
      index - 1, *(binary + index));
  }
  return add_string_character(new_binary, t_length-1,
    *(binary + 0));
}

// Function takes in total length of binary;
char* binary_right_shifting(char* binary, int t_length)
{
  char* new_binary = generate_empty_string(t_length);
  new_binary = add_string_character(new_binary, 0,
    *(binary + t_length - 1));
  for(int index = 0; index < (t_length - 1); index++)
  {
    new_binary = add_string_character(new_binary,
      (index + 1), *(binary + index));
  }
  return new_binary;
}

// Function takes in total length of binary;
char* binary_and_opperation(char* first, char* second,
  int t_length)
{
  char* new_binary = generate_empty_string(t_length);
  for(int index = 0; index < t_length; index++)
  {
    if(*(first + index)=='1' && *(second + index)=='1')
    { new_binary =
      add_string_character(new_binary, index, '1'); }
    else { new_binary =
      add_string_character(new_binary, index, '0'); }
  }
  return new_binary;
}

// Function takes in total length of binary;
char* binary_or_opperation(char* first, char* second,
  int t_length)
{
  char* new_binary = generate_empty_string(t_length);
  for(int index = 0; index < t_length; index++)
  {
    if(*(first + index)=='1' || *(second + index)=='1')
    { new_binary =
      add_string_character(new_binary, index, '1'); }
    else { new_binary =
      add_string_character(new_binary, index, '0'); }
  }
  return new_binary;
}

// Function takes in total length of binary;
char* binary_xor_opperation(char* first, char* second,
  int t_length)
{
  char* new_binary = generate_empty_string(t_length);
  for(int index = 0; index < t_length; index++)
  {
    if(*(first + index) != *(second + index))
    { new_binary =
      add_string_character(new_binary, index, '1'); }
    else { new_binary =
      add_string_character(new_binary, index, '0'); }
  }
  return new_binary;
}

// Function takes in total length of binary;
char* binary_not_opperation(char* binary, int t_length)
{
  char* new_binary = generate_empty_string(t_length);
  for(int index = 0; index < t_length; index++)
  {
    if(*(binary + index) == '1') { new_binary =
      add_string_character(new_binary, index, '0'); }
    else { new_binary =
      add_string_character(new_binary, index, '1'); }
  }
  return new_binary;
}

/* Made by Roy Hampus Fridholm */
