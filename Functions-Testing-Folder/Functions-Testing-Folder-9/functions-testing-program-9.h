
#ifndef FUNCTIONS_TESTING_PROGRAM_9_H
#define FUNCTIONS_TESTING_PROGRAM_9_H

int sentence_index_string_test(char**, int,char*);

int compare_string_sentences_test(char**, char**,
  int, int, int);

int generate_string_sentence_test(int,int,char**);

int allocate_sentence_character_test(char**, int,
  int, char, char**);

int delete_sentence_character_test(char**, int,
  int, char**);

int allocate_sentence_string_test(char**, int,
  char*, char**);

int switch_sentence_strings_test(char**, int, int,
  char**);

int delete_sentence_string_test(char**, int, int,
  char**);

int sentence_string_length_test(char**, int, int);

int move_sentence_strings_test(char**, int, int,
  char**);

int string_sentence_height_test(char**, int, int);

int switch_adjacent_strings_test(char**, int,
  char**);

int duplicate_string_sentence_test(char**, int,
  int, char**);

// remove_sentence_character_test
//
// add_sentence_character_test
//
// remove_sentence_characters_test
//
// shuffle_sentence_strings_test
//
// shuffle_string_sentence_test
//
// sort_string_sentence_test
//
// sort_sentence_strings_test
//
// sort_sentence_iteration_test
//
// sentence_string_character_test
//
// compare_sentence_content_test

#endif
