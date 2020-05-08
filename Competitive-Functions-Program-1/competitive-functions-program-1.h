
/* This program contains functions that deals with
arrays and calculates thingd using it's data. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_1_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_1_H

// Function takes in total length of array;
int* generate_empty_array(const int);

// Function takes in total length of array;
int* allocate_array_values(int*, int);

int* allocate_array_value(int*, int, int);

// Function takes in total length of array;
int* delete_array_value(int*, int, int);

int calculate_array_length(const int*);

// Function takes in total or current length of array;
int array_contains_number(int*, int, int);

// Function takes in current length of array;
int* remove_array_number(int*, int, int);

// Function takes in current length of array;
int* add_array_number(int*, int, int);

// Function takes in current length of array;
int* move_array_numbers(int*, int, int);

// Function takes in current length of array;
int* bubble_sort_array(int*, const int);

int* bubble_sort_iteration(int*, int);

int* switch_array_numbers(int*, int);

#endif

/* Made by Roy Hampus Fridholm */
