
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int insert_sentence_characters_test(char** sentence,
  int* first, int* second,char character,char** output)
{
  sentence = insert_sentence_characters(sentence,first,
    second, character);
  int height = coordinate_variable_height(second);
  int width = coordinate_variable_width(second);
  return compare_string_sentence(sentence, output,
    height, width);
}

int sentence_contains_character_test(char** sentence,
  int height, int width, char character, int output)
{
  int boolean = sentence_contains_character(sentence,
    height, width, character);
  return compare_integer_variables(boolean, output);
}

int remove_sentence_string_test(char** sentence,
  int height, char* string, char** output)
{
  sentence = remove_sentence_string(sentence, height,
    string);
  int width = sentence_string_length(sentence, 0);
  return compare_string_sentence(sentence, output,
    height, width);
}

int shuffle_string_sentence_test(char** sentence,
  int height, char** output)
{
  int width = sentence_string_length(sentence, 0);
  sentence = shuffle_string_sentence(sentence, height);
  int same = compare_string_sentence(sentence, output,
    height, width);
  int content=compare_sentence_content(sentence,output,
    height, width); return (!same && content);
}
