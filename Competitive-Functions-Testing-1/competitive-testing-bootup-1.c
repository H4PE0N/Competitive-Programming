
/* This program run all the tests from file:
competitive-functions-testing-1.c */

#include <stdio.h>
#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Testing-1/\
competitive-functions-testing-1.h"

/*

gcc -o competitive-testing-bootup-1 competitive-testing-bootup-1.c \
../Competitive-Functions-Program-1/competitive-functions-program-1.c \
competitive-functions-testing-1.c

*/

int main(int argc, char** argv)
{
  printf("Allcate Array Value\t:\t%d\n", allocate_array_value_test(
      (int[]) {'\0', '\0', '\0'}, 0, 1, (int[]) {1, '\0', '\0'}) );

  printf("Delete Array Value\t:\t%d\n", delete_array_value_test(
    (int[]) {1, '\0', '\0'}, 0, 1, (int[]) {'\0', '\0', '\0'}) );

  printf("Allocate Array Values\t:\t%d\n", allocate_array_values_test(
     (int[]) {}, 5, (int[]) {'\0', '\0', '\0', '\0', '\0'}) );

  printf("Generate Empty Array\t:\t%d\n", generate_empty_array_test(
    3, (int[]) {'\0', '\0', '\0'}) );

  printf("Calculate Array Length\t:\t%d\n", calculate_array_length_test(
     (int[]) {1, 2, 3, 4, 5, '\0'}, 5) );

  printf("Array Contains Number\t:\t%d\n", array_contains_number_test(
    (int[]) {1, 2, 3, 4, 5, '\0'}, 5, 1, 1) );

  printf("Switch Array Numbers\t:\t%d\n", switch_array_numbers_test(
    (int[]) {1, 2, 3, '\0'}, 0, (int[]) {2, 1, 3, '\0'}) );

  printf("Bubble Sort Iteration\t:\t%d\n", bubble_sort_iteration_test(
    (int[]) {3, 1, 2, '\0'}, 3, (int[]) {1, 2, 3, '\0'}) );

  printf("Bubble Sort Array\t:\t%d\n", bubble_sort_array_test(
    (int[]) {3, 1, 2, '\0'}, 3, (int[]) {1, 2, 3, '\0'}) );

  printf("Add Array Number\t:\t%d\n", add_array_number_test(
    (int[]) {1, 2, 3, '\0'}, 3, 4, (int[]) {1, 2, 3, 4, '\0'}) );

  printf("Move Array Numbers\t:\t%d\n", move_array_numbers_test(
    (int[]) {1, 2, 3, '\0'}, 2, 0, (int[]) {2, 3, 1, '\0'}) );

  printf("Remove Array Number\t:\t%d\n", remove_array_number_test(
    (int[]) {1, 2, 3, '\0'}, 3, 1, (int[]) {2, 3, '\0'}) );

  return 0;
}

/* Made by Roy Hampus Fridholm */
