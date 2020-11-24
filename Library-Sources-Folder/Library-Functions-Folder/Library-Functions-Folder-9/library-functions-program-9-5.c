
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

char* random_index_string(char** sentence, int height)
{
  int index = generate_random_index(0, height - 1);
  return sentence_index_string(sentence, index);
}

int**convert_sentence_matrix(char**sentence,int height,
  int width)
{
  int** matrix = generate_integer_matrix(height,width);
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    int* array = convert_string_array(string, width);
    matrix = append_matrix_array(matrix, index, array);
  }
  return matrix;
}

int sentence_character_amount(char** sentence,
  int height,  int width, char character)
{
  int amount = 0;
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    int current = string_character_amount(string,width,
      character);
    amount = increase_integer_variable(amount,current);
  }
  return amount;
}
