
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int generate_string_sentence_test(int height,int width,
  char** output)
{
  char** sentence = generate_string_sentence(height,
    width);
  return compare_string_sentence(sentence, output,
    height, width);
}

int compare_string_sentence_test(char** first,
  char** second, int height, int width, int output)
{
  int boolean = compare_string_sentence(first, second,
    height, width);
  return compare_integer_variables(boolean, output);
}

int sentence_index_string_test(char** sentence,
  int index, char* output)
{
  char* string = sentence_index_string(sentence,index);
  int length = character_string_length(string);
  return compare_character_strings(string, output,
    length);
}

int allocate_sentence_character_test(char** sentence,
  int height, int width, char character, char** output)
{
  sentence=allocate_sentence_character(sentence,height,
    width, character);
  return compare_string_sentence(sentence, output,
    height, width);
}

int delete_sentence_character_test(char** sentence,
  int height, int width, char** output)
{
  sentence = delete_sentence_character(sentence,height,
    width);
  return compare_string_sentence(sentence, output,
    height, width);
}

int allocate_sentence_string_test(char** sentence,
  int index, char* string, char** output)
{
  sentence = allocate_sentence_string(sentence, index,
    string);
  int width = sentence_string_length(sentence, 0);
  int height = string_sentence_height(sentence, width);
  return compare_string_sentence(sentence, output,
    height, width);
}

int switch_sentence_strings_test(char** sentence,
  int first, int second, char** output)
{
  sentence = switch_sentence_strings(sentence, first,
    second);
  int width = sentence_string_length(sentence, 0);
  int height = string_sentence_height(sentence, width);
  return compare_string_sentence(sentence, output,
    height, width);
}

int delete_sentence_string_test(char** sentence,
  int height, int index, char** output)
{
  sentence = delete_sentence_string(sentence, height,
    index);
  int width = sentence_string_length(sentence, 0);
  return compare_string_sentence(sentence, output,
    height, width);
}

int sentence_string_length_test(char** sentence,
  int index, int output)
{
  int width = sentence_string_length(sentence, index);
  return compare_integer_variables(width, output);
}

int add_sentence_string_test(char**sentence,int height,
  char* string, char** output)
{
  sentence=add_sentence_string(sentence,height,string);
  int width = sentence_string_length(sentence, 0);
  return compare_string_sentence(sentence, output,
    height + 1, width);
}
