
/* This program contains functions about matrix
and two dimensional arrays. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_2_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_2_H

// Inputs: total length, total width;
int** generate_matrix_array(int, int);

/* Inputs: matrix, matrix index, array index,
number */
int** allocate_matrix_value(int**,int,int,int);

/* Inputs: matrix, matrix index, array index,
total length; */
int** delete_matrix_value(int**,int,int,int);

// Inputs: matrix, total length;
int calculate_matrix_length(int**, int);

/* Inputs: matrix, matrix length, array length,
number; */
int matrix_contains_number(int**,int,int,int);

// Inputs: matrix, total length, number;
int** remove_matrix_number(int**, int, int);

// Inputs: matrix, current length, number;
int** add_matrix_number(int**, int, int);

/* Inputs: first matrix, second matrix, matrix
length, array length; */
int compare_matrix_arrays(int**, int**, int,
  int);

#endif

/* Made by Roy Hampus Fridholm */
