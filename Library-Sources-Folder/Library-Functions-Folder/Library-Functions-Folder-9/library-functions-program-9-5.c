
#include "../library-functions-headers.h"

int sentence_contains_character(char** sentence,
  int height, int width, char character)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    if(string_contains_character(string, width,
      character)) return true;
  }
  return false;
}

char**append_sentence_string(char**sentence,int height,
  char* string)
{
  sentence = allocate_sentence_string(sentence, height,
    string); return sentence;
}
