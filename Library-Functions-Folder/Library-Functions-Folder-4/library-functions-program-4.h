
#ifndef LIBRARY_FUNCTIONS_PROGRAM_4_H
#define LIBRARY_FUNCTIONS_PROGRAM_4_H

char* allocate_string_character(char*,
  int, char);

char* allocate_string_characters(char*,
  int);

char* generate_empty_string(int);

int calculate_string_length(char*);

int string_contains_character(char*,
  int, char);

char* switch_string_characters(char*,
  int);

char* move_string_characters(char*,int,
  int);

char* remove_string_character(char*,
  int,char);

char* add_string_character(char*, int,
  char);

int compare_strings_together(char*,
  char*, int);

char* remove_string_characters(char*,
  int, char);

char generate_random_character(int,
  int);

int character_range_between(char, int,
  int);

char* generate_random_string(int, int,
  int);

void character_string_stdout(char*,
  int);

char* shuffle_character_string(char*,
  int);

char* duplicate_character_string(char*,
  int);

char* switch_adjacent_characters(char*,
  int);

char* sort_string_iteration(char*,int);

char* sort_character_string(char*,int);

int compare_string_content(char*,
  char*);

#endif
