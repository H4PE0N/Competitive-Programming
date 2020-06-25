
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

char** reverse_sentence_strings(char** sentence,
  int height, int width)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    *(sentence +index)=reverse_character_string(string,
      width);
  }
  return sentence;
}

int sentence_string_index(char** sentence, int height,
  char* string)
{
  int string_index = height;
  for(int index = (height - 1); index >= 0; index -= 1)
  {
    char* index_string=sentence_index_string(sentence,
      index);
    int length=sentence_string_length(sentence, index);
    if(compare_character_strings(string, index_string,
      length)) { string_index = index; break; }
  }
  return string_index;
}

char** add_sentence_string(char** sentence, int height,
  char* string)
{
  sentence = allocate_sentence_string(sentence, height,
    string); return sentence;
}
