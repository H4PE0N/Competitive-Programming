
/* This program contains functions that test the
functions in file competitive-functions-program-2.h*/

#ifndef COMPETITIVE_FUNCTIONS_TESTING_2_H
#define COMPETITIVE_FUNCTIONS_TESTING_2_H

/* Inputs: total length, total width,
output matrix; */
int generate_matrix_array_test(int, int, int**);

/* Inputs: input matrix, x, y, number,
output matrix; */
int allocate_matrix_value_test(int**, int, int,
  int, int**);

/* Inputs: input matrix, x, y, total length,
output matrix; */
int delete_matrix_value_test(int**, int, int, int,
  int**);

/* Inputs: input matrix, total array length,
output length; */
int calculate_matrix_length_test(int**, int, int);

/* Inputs: input matrix, m length, a length number,
output boolean; */
int matrix_contains_number_test(int**, int, int,
  int, int);

/* Inputs: input matrix, total length, number,
output matrix; */
int remove_matrix_number_test(int**, int, int,
  int**);

/* Inputs: input matrix, m length, a length,
number, output matrix; */
int add_matrix_number_test(int**, int, int, int,
  int**);

#endif

/* Made by Roy Hampus Fridholm */
