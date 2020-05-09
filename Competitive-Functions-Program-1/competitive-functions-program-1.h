
/* This program contains functions that deals with
arrays and calculates thingd using it's data. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_1_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_1_H

// Inputs: array, index, number;
int* allocate_array_value(int*, int, int);

// Inputs: array, total length;
int* allocate_array_values(int*, int);

// Inputs: total length;
int* generate_empty_array(const int);

// Inputs: array;
int calculate_array_length(const int*);

// Inputs: array, total length;
int array_contains_number(int*, int, int);

// Inputs: array, index;
int* switch_array_numbers(int*, int);

// Inputs: array, iteration;
int* bubble_sort_iteration(int*, int);

// Inputs: array, current length;
int* bubble_sort_array(int*, const int);

// Inputs: array, current length, number;
int* add_array_number(int*, int, int);

// Inputs: array, current length, start;
int* move_array_numbers(int*, int, int);

// Inputs: array, current length, number;
int* remove_array_number(int*, int, int);

// Inputs: array, total length, index;
int* delete_array_value(int*, int, int);

// Inputs: array, array, total length;
int compare_integer_arrays(int*,int*,int);

#endif

/* Made by Roy Hampus Fridholm */
