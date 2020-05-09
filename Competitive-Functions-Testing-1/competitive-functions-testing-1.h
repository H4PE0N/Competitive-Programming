
/* This program contains functions that test the
functions in file competitive-functions-program-1.h */

#ifndef COMPETITIVE_FUNCTIONS_TESTING_1_H
#define COMPETITIVE_FUNCTIONS_TESTING_1_H

// Inputs: input array, index, number, output array;
int allocate_array_value_test(int*, int, int, int*);

/* Inputs: input array, total length, index,
output array; */
int delete_array_value_test(int*, int, int, int*);

// Inputs: input array, total length, output array;
int allocate_array_values_test(int*, int, int*);

// Inputs: total length, output array;
int generate_empty_array_test(int, int*);

// Inputs: input array, length;
int calculate_array_length_test(int*, int);

/* Inputs: input array, total length, number,
boolean; */
int array_contains_number_test(int*, int, int, int);

// Inputs: input array, index, output array;
int switch_array_numbers_test(int*, int, int*);

// Inputs: input array, index, output array;
int bubble_sort_iteration_test(int*, int, int*);

/* Inputs: input array, current length, output
array; */
int bubble_sort_array_test(int*, int, int*);

/* Inputs: input array, current length, number,
output array; */
int add_array_number_test(int*, int, int, int*);

/* Inputs: input array, current length, start,
output array; */
int move_array_numbers_test(int*, int, int, int*);

/* Inputs: input array, current length, number,
output array; */
int remove_array_number_test(int*, int, int, int*);

#endif

/* Made by Roy Hampus Fridholm */
