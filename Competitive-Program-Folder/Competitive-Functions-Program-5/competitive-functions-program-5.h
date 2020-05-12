
#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_5_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_5_H

// Inputs: binary, total length, decimal;
int binary_decimal_enough(char*, int, int);

// Inputs: binary, total length, decimal;
int reduce_binary_decimal(char*, int, int);

// Inputs: binary, total length, decimal;
char* allocate_binary_value(char*,int,int);

// Inputs: binary, total length, decimal;
char* allocate_binary_values(char*,int,int);

// Inputs: decimal;
int calculate_real_length(const int);

// Inputs: decimal;
int calculate_nearest_length(const int);

// Inputs: decimal;
char* convert_decimal_binary(const int);

// Inputs: character;
char* convert_character_binary(char);

// Inputs: binary, index, decimal;
int calculate_decimal_binary(char*, int,
  int);

// Inputs: binary;
int convert_binary_decimal(char*);

#endif
