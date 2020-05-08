
/* This program contains functions that deals
with binary strings and conversions between
decimal and characters. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_5_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_5_H

char* convert_decimal_binary(const int);

char* convert_character_binary(char);

int convert_binary_decimal(char*);

// Function takes in total length of binary;
char* allocate_binary_values(char*, int);

// Function takes in total length of binary;
char* allocate_binary_value(char*, int, int);

// Function takes in total length of binary;
int reduce_binary_decimal(char*, int, int);

int calculate_real_binary_length(const int);

int calculate_nearest_binary_length(const int);

int calculate_decimal_binary(char*, int, int);

#endif

/* Made by Roy Hampus Fridholm */
