
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-7/\
competitive-functions-program-7.h"

int binary_left_shifting_test(char*i_binary, int length,
  char* o_binary)
{
  i_binary = binary_left_shifting(i_binary, length);
  return compare_strings_together(i_binary, o_binary,
    length);
}

int binary_right_shifting_test(char*i_binary,int length,
  char* o_binary)
{
  i_binary = binary_right_shifting(i_binary, length);
  return compare_strings_together(i_binary, o_binary,
    length);
}

int binary_and_opperation_test(char* first,char* second,
  int length, char* i_binary)
{
  char* binary = binary_and_opperation(first, second,
    length);
  return compare_strings_together(binary, i_binary,
    length);
}

int binary_or_opperation_test(char* first, char* second,
  int length, char* i_binary)
{
  char* binary = binary_or_opperation(first, second,
    length);
  return compare_strings_together(binary, i_binary,
    length);
}

int binary_xor_opperation_test(char* first,char* second,
  int length, char* i_binary)
{
  char* binary = binary_xor_opperation(first, second,
    length);
  return compare_strings_together(binary, i_binary,
    length);
}

int binary_not_opperation_test(char*i_binary,int length,
  char* o_binary)
{
  i_binary = binary_not_opperation(i_binary, length);
  return compare_strings_together(i_binary, o_binary,
    length);
}
