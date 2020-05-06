
/* This program contains functions that deals
with matrixis and some data that have with it
to do. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_2_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_2_H

int** generate_matrix_array(int, int);
int** allocate_matrix_value(int**, int, int,
  int);
int** delete_matrix_value(int**, int, int,
  int);

int calculate_matrix_length(int**, int);
int matrix_contains_number(int**, int, int);

int** remove_matrix_number(int**, int,
  int);
int** add_matrix_number(int**, int, int);

#endif

/* Made by Roy Hampus Fridholm */
