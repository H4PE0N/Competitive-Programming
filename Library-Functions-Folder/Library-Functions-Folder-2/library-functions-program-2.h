
#ifndef LIBRARY_FUNCTIONS_PROGRAM_2_H
#define LIBRARY_FUNCTIONS_PROGRAM_2_H

int** generate_matrix_array(int, int);

int** allocate_matrix_integer(int**,int,
  int, int);

int** delete_matrix_integer(int**, int,
  int, int);

int integer_matrix_height(int**,int);

int matrix_contains_integer(int**, int,
  int, int);

int** remove_matrix_integer(int**, int,
  int);

int** add_matrix_integer(int**, int,
  int);

int compare_matrix_arrays(int**,int**,
  int, int);

int** remove_matrix_integers(int**,int,
  int);

int** switch_matrix_integers(int**, int,
  int);

int** switch_matrix_arrays(int**, int,
  int);

int** move_matrix_arrays(int**,int,int);

#endif
