
/* This program runs all the tests from file:
competitive-functions-testing-7.c */

#include <stdio.h>
#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

#include "../Competitive-Functions-Program-6/\
competitive-functions-program-6.h"

#include "../Competitive-Functions-Testing-6/\
competitive-functions-testing-6.h"

int main(int argc, char** argv)
{

  printf("Calculate Odd Median\t:\t%d\n", calculate_odd_median_test(
    (int[]) {1, 2, 3, 4, 5, '\0'}, 5, 3.0) );

  printf("Calculate Even Median\t:\t%d\n", calculate_even_median_test(
    (int[]) {1, 2, 3, 4, 5, 6, '\0'}, 6, 3.5) );

  printf("Calculate Array Median\t:\t%d\n", calculate_array_median_test(
    (int[]) {1, 2, 3, 4, 5, '\0'}, 5, 3) );

  printf("Calculate Array Average\t:\t%d\n", calculate_array_average_test(
    (int[]) {1, 2, 3, 4, 5, '\0'}, 5, 3.0) );

  printf("Calculate Common Value\t:\t%d\n", calculate_common_value_test(
    (int*[]){ (int[]) {1, 2}, (int[]) {2, 3} }, 2, 2) );

  printf("Calculate Array Typical\t:\t%d\n", calculate_array_typical_test(
    (int[]) {1, 2, 3, 4, 5, '\0'}, 5, -1) );

  return 0;
}

/* gcc -o competitive-testing-bootup-6 competitive-testing-bootup-6.c \
../Competitive-Functions-Program-1/competitive-functions-program-1.c \
../Competitive-Functions-Program-2/competitive-functions-program-2.c \
../Competitive-Functions-Program-3/competitive-functions-program-3.c \
../Competitive-Functions-Program-6/competitive-functions-program-6.c \
competitive-functions-testing-6.c */

/* Made by Roy Hampus Fridholm */
