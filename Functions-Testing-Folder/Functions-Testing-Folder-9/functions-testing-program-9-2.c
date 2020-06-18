
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

int move_sentence_strings_test(char** sentence,
  int height, int start, char** output)
{
  sentence = move_sentence_strings(sentence, height,
    start);
  int width = sentence_string_length(sentence, 0);
  return compare_string_sentence(sentence, output,
    height, width);
}

int string_sentence_height_test(char** sentence,
  int width, int output)
{
  int height = string_sentence_height(sentence, width);
  return (height == output);
}

int switch_adjacent_strings_test(char** sentence,
  int index, char** output)
{
  sentence = switch_adjacent_strings(sentence, index);
  int width = sentence_string_length(sentence, 0);
  int height = string_sentence_height(sentence, width);
  return compare_string_sentence(sentence, output,
    height, width);
}

int duplicate_string_sentence_test(char** sentence,
  int height, int width, char** output)
{
  char** doublet = duplicate_string_sentence(sentence,
    height, width);
  return compare_string_sentence(doublet, output,
    height, width);
}

int remove_sentence_character_test(char** sentence,
  int height, char character, char** output)
{
  sentence = remove_sentence_character(sentence,height,
    character);
  return compare_string_sentence(sentence, output,
    height, sentence_string_length(sentence, 0));
}

int add_sentence_character_test(char** sentence,
  int height, char character, char** output)
{
  sentence = add_sentence_character(sentence, height,
    character);
  return compare_string_sentence(sentence, output,
    height, sentence_string_length(sentence, 0));
}

int remove_sentence_characters_test(char** sentence,
  int height, char character, char** output)
{
  sentence=remove_sentence_characters(sentence, height,
    character);
  return compare_string_sentence(sentence, output,
    height, sentence_string_length(sentence, 0));
}

int sentence_string_contains_test(char** sentence,
  int index, char character, int output)
{
  int boolean=sentence_string_contains(sentence,index,
    character); return (boolean == output);
}

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
