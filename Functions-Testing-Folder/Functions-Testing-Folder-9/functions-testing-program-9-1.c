
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

int generate_string_sentence_test(int height,int width,
  char** output)
{
  char** sentence = generate_string_sentence(height,
    width);
  return compare_string_sentences(sentence, output,
    height, width);
}

int compare_string_sentences_test(char** first,
  char** second, int height, int width, int output)
{
  int boolean = compare_string_sentences(first, second,
    height, width); return (boolean == output);
}

int sentence_index_string_test(char** sentence,
  int index, char* output)
{
  char* string = sentence_index_string(sentence,index);
  return compare_character_strings(string, output,
    calculate_string_length(string));
}

int allocate_sentence_character_test(char** sentence,
  int height, int width, char character, char** output)
{
  sentence=allocate_sentence_character(sentence,height,
    width, character);
  return compare_string_sentences(sentence, output,
    height, width);
}

int delete_sentence_character_test(char** sentence,
  int height, int width, int index, char** output)
{
  sentence = delete_sentence_character(sentence,height,
    width, index);
  return compare_string_sentences(sentence, output,
    height, width);
}

int allocate_sentence_string_test(char**, int,
  char*, char**);

int switch_sentence_strings_test(char**, int, int,
  char**);

int delete_sentence_string_test(char**, int, int,
  int, char**);

int sentence_string_length_test(char**, int, int);

int move_sentence_strings_test(char**, int, int,
  char**);

int string_sentence_height_test(char**, int, int);

int switch_adjacent_strings_test(char**, int,
  char**);
