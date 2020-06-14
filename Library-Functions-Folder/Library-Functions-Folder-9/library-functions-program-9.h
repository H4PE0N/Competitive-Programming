
#ifndef LIBRARY_FUNCTIONS_PROGRAM_9_H
#define LIBRARY_FUNCTIONS_PROGRAM_9_H

char** generate_string_sentence(int, int);

int compare_string_sentences(char**,char**,
  int, int);

char* sentence_index_string(char**, int);

char** generate_random_sentence(int, int,
  int, int);

void string_sentence_stdout(char**, int,
  int);

char** allocate_sentence_character(char**,
  int, int, char);

char** delete_sentence_character(char**,
  int, int, int);

char** allocate_sentence_string(char**,int,
  char*);

char** delete_sentence_string(char**, int,
  int);

char** move_sentence_strings(char**, int,
  int);

int string_sentence_height(char**, int);

int sentence_string_length(char**, int);

char** switch_sentence_strings(char**, int,
  int);

char** switch_adjacent_strings(char**,int);

#endif
