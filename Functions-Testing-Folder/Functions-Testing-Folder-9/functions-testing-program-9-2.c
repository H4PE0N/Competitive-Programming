
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

int string_sentence_character_test(char** sentence,
  int height, int width, char output)
{
  char character = string_sentence_character(sentence,
    height, width); return (character == output);
}

int sort_sentence_strings_test(char** sentence,
  int height, char** output)
{
  sentence = sort_sentence_strings(sentence, height);
  return compare_string_sentence(sentence, output,
    height, sentence_string_length(sentence, 0));
}

int shuffle_sentence_strings_test(char** sentence,
  int height, char** output)
{
  sentence = shuffle_sentence_strings(sentence,height);
  int width = sentence_string_length(sentence, 0);
  int boolean = !compare_string_sentence(sentence,
    output, height, width);
  return boolean && compare_sentence_content(sentence,
    output, height, width);
}

int sentence_character_greater_test(char** sentence,
  int first, int second, int index, int output)
{
  int boolean = sentence_character_greater(sentence,
    first, second, index); return (boolean == output);
}

int sentence_character_smaller_test(char** sentence,
  int first, int second, int index, int output)
{
  int boolean = sentence_character_smaller(sentence,
    first, second, index); return (boolean == output);
}

int sentence_string_smaller_test(char** sentence,
  int height, int first, int second, int output)
{
  int boolean=sentence_string_smaller(sentence, height,
    first, second); return (boolean == output);
}

int sentence_string_greater_test(char** sentence,
  int height, int first, int second, int output)
{
  int boolean=sentence_string_greater(sentence, height,
    first, second); return (boolean == output);
}

int sort_string_sentence_test(char** sentence,
  int height, char** output)
{
  sentence = sort_string_sentence(sentence, height);
  return compare_string_sentence(sentence, output,
    height, sentence_string_length(sentence, 0));
}

int sort_sentence_iteration_test(char** sentence,
  int height, int iteration, char** output)
{
  sentence = sort_sentence_iteration(sentence, height,
    iteration);
  return compare_string_sentence(sentence, output,
    height, sentence_string_length(sentence, 0));
}

int compare_sentence_content_test(char** first,
  char** second, int height, int width, int output)
{
  int boolean = compare_sentence_content(first, second,
    height, width); return (boolean == output);
}
