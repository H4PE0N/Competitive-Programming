
#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_4_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_4_H

// Inputs: string, index, character;
char* allocate_string_value(char*, int, char);

// Inputs: string, total length;
char* allocate_string_values(char*, int);

// Inputs: total length;
char* generate_empty_string(const int);

// Inputs: string;
int calculate_string_length(const char*);

// Inputs: string, total length, character;
int string_contains_character(char*,int,char);

// Inputs: string, index;
char* switch_string_characters(char*, int);

// Inputs: string, current length, start;
char* move_string_characters(char*, int, int);

// Inputs: string, current length, character;
char* remove_string_character(char*,int,char);

// Inputs: string, current length, character;
char* add_string_character(char*, int, char);

/* Inputs: first string, second string,
total length; */
int compare_strings_together(char*,char*,int);

#endif
