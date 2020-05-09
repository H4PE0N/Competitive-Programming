
/* This program contains functions that test the
functions in file competitive-functions-program-1.h */

#ifndef COMPETITIVE_FUNCTIONS_TESTING_1_H
#define COMPETITIVE_FUNCTIONS_TESTING_1_H

// Inputs: i array, index, number, o array;
int allocate_array_value_test(int*, int, int, int*);

// Inputs: i array, total length, index, o array;
int delete_array_value_test(int*, int, int, int*);

// Inputs: i array, total length, o array;
int allocate_array_values_test(int*, int, int*);

// Inputs: total length, o array;
int generate_empty_array_test(int, int*);

// Inputs: i array, length;
int calculate_array_length_test(int*, int);

// Inputs: i array, total length, number, boolean;
int array_contains_number_test(int*, int, int, int);

// Inputs: i array, index, o array;
int switch_array_numbers_test(int*, int, int*);

// Inputs: i array, index, o array;
int bubble_sort_iteration_test(int*, int, int*);

// Inputs: i array, current length, o array;
int bubble_sort_array_test(int*, int, int*);

// Inputs: i array, current length, number, o array;
int add_array_number_test(int*, int, int, int*);

// Inputs: i array, current length, start, o array;
int move_array_numbers_test(int*, int, int, int*);

// Inputs: i array, current length, number, o array;
int remove_array_number_test(int*, int, int, int*);

#endif

/* Made by Roy Hampus Fridholm */
