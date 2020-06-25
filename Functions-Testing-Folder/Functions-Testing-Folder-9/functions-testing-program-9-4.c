
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

int reverse_sentence_strings_test(char** sentence,
  int height, int width, char** output)
{
  sentence = reverse_sentence_strings(sentence, height,
    width);
  return compare_string_sentence(sentence, output,
    height, width);
}

int sentence_string_index_test(char** sentence,
  int height, char* string, int output)
{
  int index = sentence_string_index(sentence, height,
    string); return (index == output);
}

int add_sentence_string_test(char**sentence,int height,
  char* string, char** output)
{
  sentence=add_sentence_string(sentence,height,string);
  int width = sentence_string_length(sentence, 0);
  return compare_string_sentence(sentence, output,
    height, width);
}
