
/* This program contains functions that deals
with strings, character arrays. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_4_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_4_H

// Function takes in total length of string;
char* generate_empty_string(const int);

// Function takes in total length of string;
char* allocate_string_values(char*, int);

char* allocate_string_value(char*, int, char);

int calculate_string_length(const char*);

// Function takes in current length of string;
int string_contains_character(char*, int, char);

// Function takes in current length of string;
char* add_string_character(char*, int, char);

// Function takes in current length of string;
char* remove_string_character(char*, int, char);

// Function takes in current length of string;
char* move_string_characters(char*, int, int);

char* switch_string_characters(char*, int);

#endif

/* Made by Roy Hampus Fridholm */
