
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

int generate_string_sentence_test(int height,int width,
  char** i_sentence)
{
  char** sentence = generate_string_sentence(height,
    width);
  return compare_string_sentences(sentence, i_sentence,
    height, width);
}

int compare_string_sentences_test(char** first,
  char** second, int height, int width, int boolean)
{
  int output = compare_string_sentences(first, second,
    height, width);
  return (output == boolean);
}

int sentence_index_string_test(char** sentence,
  int index, char* i_string)
{
  char* string = sentence_index_string(sentence,index);
  int length = calculate_string_length(string);
  return compare_strings_together(string, i_string,
    length);
}
