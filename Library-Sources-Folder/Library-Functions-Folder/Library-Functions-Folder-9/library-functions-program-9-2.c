
#include "../library-functions-headers.h"

char** delete_sentence_character(char** sentence,
  int height, int width)
{
  char* string=sentence_index_string(sentence, height);
  int length = sentence_string_length(sentence, height);
  string = delete_string_character(string,length, width);
  return allocate_sentence_string(sentence, height,
    string);
}

char** delete_sentence_string(char** sentence,
  int height, int index)
{
  sentence = move_sentence_strings(sentence, height,
    index);
  int length = sentence_string_length(sentence, 0);
  return allocate_sentence_string(sentence, height,
    generate_character_string(length));
}

void string_sentence_stdout(char** sentence, int height,
  int width)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    character_string_stdout(string, width);
  }
}

char** generate_random_sentence(int height, int width,
  int minimum, int maximum)
{
  char** sentence = generate_string_sentence(height,
    width);
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=generate_random_string(width, minimum,
      maximum);
    sentence = allocate_sentence_string(sentence,index,
      string);
  }
  return sentence;
}

char** duplicate_string_sentence(char** sentence,
  int height, int width)
{
  char** doublet = generate_string_sentence(height,
    width);
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    char* current = duplicate_character_string(string,
      width);
    doublet = allocate_sentence_string(doublet, index,
      current);
  }
  return doublet;
}

char** remove_sentence_characters(char** sentence,
  int height, char character)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    int length=sentence_string_length(sentence, index);
    sentence = allocate_sentence_string(sentence,index,
    remove_string_characters(string,length,character));
  }
  return sentence;
}

char** add_sentence_character(char** sentence,
  int height, char character)
{
  char* string=sentence_index_string(sentence, height);
  int length = sentence_string_length(sentence,height);
  string = add_string_character(string, length,
    character);
  return allocate_sentence_string(sentence, height,
    string);
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

char** add_sentence_string(char** sentence, int height,
  char* string)
{
  sentence = allocate_sentence_string(sentence, height,
    string); return sentence;
}
