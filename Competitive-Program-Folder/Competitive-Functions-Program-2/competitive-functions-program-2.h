
#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_2_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_2_H

// Inputs: total length, total width;
int** generate_matrix_array(int, int);

/* Inputs: matrix, matrix index, array index,
integer */
int** allocate_matrix_integer(int**,int,int,
  int);

/* Inputs: matrix, matrix index, array index,
total length; */
int** delete_matrix_integer(int**,int,int,
  int);

// Inputs: matrix, total length;
int calculate_matrix_length(int**, int);

/* Inputs: matrix, matrix length,
array length, integer; */
int matrix_contains_integer(int**,int,int,
  int);

// Inputs: matrix, total length, integer;
int** remove_matrix_integer(int**,int,int);

// Inputs: matrix, current length, integer;
int** add_matrix_integer(int**, int, int);

/* Inputs: first matrix, second matrix,
matrix length, array length; */
int compare_matrix_arrays(int**,int**,int,
  int);

#endif
