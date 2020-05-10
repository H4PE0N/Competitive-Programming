
/* This program starts all the testing functions and prints result. */

#include <stdio.h>
#include <stdlib.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

#include "../Competitive-Functions-Program-7/\
competitive-functions-program-7.h"

#include "../Competitive-Functions-Testing-7/\
competitive-functions-testing-7.h"

int main(int argc, char** argv)
{
  printf("Binary Left Shifting\t:\t%d\n", binary_left_shifting_test(
    "00101100", 8, "01011000") );

  printf("Binary Right Shifting\t:\t%d\n", binary_right_shifting_test(
    "00101100", 8, "00010110") );

  printf("Binary And Opperation\t:\t%d\n", binary_and_opperation_test(
    "01101000", "10011010", 8, "00001000") );

  printf("Binary Or Opperation\t:\t%d\n", binary_or_opperation_test(
    "01101000", "10011010", 8, "11111010") );

  printf("Binary Xor Opperation\t:\t%d\n", binary_xor_opperation_test(
    "01101000", "10011010", 8, "11110010") );

  printf("Binary Not Opperation\t:\t%d\n", binary_not_opperation_test(
    "01101000", 8, "10010111") );

  return 0;
}

/* gcc -o competitive-testing-bootup-7 competitive-testing-bootup-7.c \
../Competitive-Functions-Program-4/competitive-functions-program-4.c \
../Competitive-Functions-Program-7/competitive-functions-program-7.c \
../Competitive-Functions-Testing-7/competitive-functions-testing-7.c */

/* Made by Roy Hampus Fridholm */
