
#ifndef COMPETITIVE_FUNCTIONS_TESTING_2_H
#define COMPETITIVE_FUNCTIONS_TESTING_2_H

/* Inputs: total length, total width,
output matrix; */
int generate_matrix_array_test(int, int, int**);

/* Inputs: input matrix, x, y, integer,
output matrix; */
int allocate_matrix_integer_test(int**, int, int,
  int, int**);

/* Inputs: input matrix, x, y, total length,
output matrix; */
int delete_matrix_integer_test(int**,int,int,int,
  int**);

/* Inputs: input matrix, total array length,
output length; */
int calculate_matrix_length_test(int**,int,int);

/* Inputs: input matrix, m length, a length,
integer, output boolean; */
int matrix_contains_integer_test(int**,int,int,
  int, int);

/* Inputs: input matrix, total length, integer,
output matrix; */
int remove_matrix_integer_test(int**, int, int,
  int**);

/* Inputs: input matrix, m length, a length,
integer, output matrix; */
int add_matrix_integer_test(int**,int,int,int,
  int**);

#endif
