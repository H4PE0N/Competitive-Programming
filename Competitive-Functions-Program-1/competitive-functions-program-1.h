
/* This program contains functions that deals with
arrays and calculates thingd using it's data. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_1_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_1_H

int* generate_empty_array(const int);
int* allocate_array_values(int*, int);
int* allocate_array_value(int*, int, int);

int calculate_array_length(const int*);
int array_contains_number(int*, int, int);

int* remove_array_number(int*, int, int);
int* add_array_number(int*, int, int);
int* move_array_numbers(int*, int, int);

int* bubble_sort_array(int*, const int);
int* bubble_sort_iteration(int*, int);
int* switch_array_numbers(int*, int);

#endif

/* Made by Roy Hampus Fridholm */
