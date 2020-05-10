
/* This program contains functions that test the
functions in file competitive-functions-program-5.h */

#ifndef COMPETITIVE_FUNCTIONS_TESTING_5_H
#define COMPETITIVE_FUNCTIONS_TESTING_5_H

/* Inputs: binary, total length, input decimal,
output decimal; */
int reduce_binary_decimal_test(char*, int, int, int);

/* Inputs: input binary, total length, decimal,
output binary; */
int allocate_binary_value_test(char*, int, int, char*);

/* Inputs: input binary, total length, decimal,
output binary; */
int allocate_binary_values_test(char*, int, int, char*);

// Inputs: decimal, output length;
int calculate_real_binary_length_test(int, int);

// Inputs: decimal, output length;
int calculate_nearest_binary_length_test(int, int);

// Inputs: decimal, output binary;
int convert_decimal_binary_test(int, char*);

// Inputs: character, output binary;
int convert_character_binary_test(char, char*);

/* Inputs: binary, index, input decimal,
output decimal */
int calculate_decimal_binary_test(char*, int, int, int);

// Inputs: binary, output decimal;
int convert_binary_decimal_test(char*, int);

#endif

/* Made by Roy Hampus Fridholm */
