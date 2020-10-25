
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
