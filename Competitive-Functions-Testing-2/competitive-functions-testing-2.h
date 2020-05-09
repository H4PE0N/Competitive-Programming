
/* This program contains functions that test the
functions in file competitive-functions-program-2.h*/

#ifndef COMPETITIVE_FUNCTIONS_TESTING_2_H
#define COMPETITIVE_FUNCTIONS_TESTING_2_H

// Inputs: total length, total width, o matrix;
int generate_matrix_array_test(int, int, int**);

// Inputs: i matrix, x, y, number, o matrix;
int allocate_matrix_value_test(int**, int, int,
  int, int**);

// Inputs: i matrix, x, y, total length, o matrix;
int delete_matrix_value_test(int**, int, int, int,
  int**);

// Inputs: i matrix, total array length, o length;
int calculate_matrix_length_test(int**, int, int);

/* Inputs: i matrix, m length, a length number,
o boolean; */
int matrix_contains_number_test(int**, int, int,
  int, int);

// Inputs: i matrix, total length, number, o matrix;
int remove_matrix_number_test(int**, int, int,
  int**);

/* Inputs: i matrix, m length, a length, number,
o matrix; */
int add_matrix_number_test(int**, int, int, int,
  int**);

#endif

/* Made by Roy Hampus Fridholm */
