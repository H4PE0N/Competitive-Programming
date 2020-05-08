
/* This program contains functions that deals
with matrixis and some data that have with it
to do. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_2_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_2_H

// Function takes in total length and width;
int** generate_matrix_array(int, int);

int** allocate_matrix_value(int**, int, int, int);

// Function takes in total length of array;
int** delete_matrix_value(int**, int, int, int);

// Function takes in total length of array;
int calculate_matrix_length(int**, int);

// Function takes in total length of array;
int matrix_contains_number(int**, int, int);

// Function takes in current length of matrix;
int** remove_matrix_number(int**, int, int);

// Function takes in current length of matrix;
int** add_matrix_number(int**, int, int);

#endif

/* Made by Roy Hampus Fridholm */
