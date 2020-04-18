
/* A collection of competitive functions*/

#ifndef COMPETITIVE_FUNCTION_PROGRAM_2_H
#define COMPETITIVE_FUNCTION_PROGRAM_2_H

int calculate_matrix_distance(int*, int*);
int calculate_horizontal_distance(int*, int*);
int calculate_vertical_distance(int*, int*);

typedef int (*criterion) (int);

int* add_numbers_by_criterion(int*, int,
  criterion);
int array_contains_number(int*, int, int);

int* move_array_numbers(int*, int, int);
int* remove_array_number(int*, int, int);
int* add_array_number(int*, int, int);

#endif

/* Made by Roy Hampus Fridholm - 2020/04/15 */
