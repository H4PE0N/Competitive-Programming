
/* This program starts all the testing functions and prints result. */

#include <stdio.h>
#include <stdlib.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

#include "../Competitive-Functions-Program-5/\
competitive-functions-program-5.h"

#include "../Competitive-Functions-Testing-5/\
competitive-functions-testing-5.h"

int main(int argc, char** argv)
{
  printf("Reduce Binary Decimal\t:\t%d\n", reduce_binary_decimal_test(
    (char[]) {'0','1','\0','\0','\0','\0','\0','\0','\0'}, 8, 65, 1) );

  printf("Allocate Binary value\t:\t%d\n", allocate_binary_value_test(
    (char[]) {'0','\0','\0','\0','\0','\0','\0','\0','\0'}, 8, 65,
    (char[]) {'0','1','\0','\0','\0','\0','\0','\0','\0'}) );

  printf("Allocate Binary Values\t:\t%d\n", allocate_binary_values_test(
    (char[]) {'\0','\0','\0','\0','\0','\0','\0','\0','\0'}, 8, 65,
    (char[]) {'0','1','0','0','0','0','0','1','\0'}) );

  printf("Calculate Real Length\t:\t%d\n",
    calculate_real_binary_length_test(65, 7) );

  printf("Calculate Nearest Length:\t%d\n",
    calculate_nearest_binary_length_test(65, 8) );

  printf("Convert Decimal Binary\t:\t%d\n", convert_decimal_binary_test(
    65, (char[]) {'0','1','0','0','0','0','0','1','\0'}) );

  printf("Convert Character Binary:\t%d\n",convert_character_binary_test(
    'A', (char[]) {'0','1','0','0','0','0','0','1','\0'}) );

  printf("Calculate Decimal Binary:\t%d\n", calculate_decimal_binary_test(
    (char[]) {'0','1','0','0','0','0','0','0','\0'}, 1, 0, 64) );

  printf("Convert Binary Decimal\t:\t%d\n", convert_binary_decimal_test(
    (char[]) {'0','0','0','1','0','1','0','1','\0'}, 21) );

  return 0;
}

/* Made by Roy Hampus Fridholm */
