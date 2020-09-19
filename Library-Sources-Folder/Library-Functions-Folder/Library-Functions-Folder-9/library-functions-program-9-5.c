
#include "../library-functions-headers.h"

char** reverse_sentence_strings(char** sentence,
  int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    *(sentence +index)=reverse_character_string(string,
      sentence_string_length(sentence, index));
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

char** remove_sentence_string(char** sentence,
  int height, char* string)
{
  int index = sentence_string_index(sentence, height,
    string);
  return delete_sentence_string(sentence,height,index);
}

int sentence_string_length(char** sentence, int index)
{
  char* string = sentence_index_string(sentence,index);
  return character_string_length(string);
}
