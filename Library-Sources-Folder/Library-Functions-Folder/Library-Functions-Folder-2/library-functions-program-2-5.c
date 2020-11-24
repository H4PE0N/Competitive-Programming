
#include "../library-functions-headers.h"

char** convert_matrix_sentence(int** matrix,int height,
  int width)
{
  char** sentence = generate_string_sentence(height,
    width);
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    char* string = convert_array_string(array, width);
    sentence = append_sentence_string(sentence, index,
      string);
  }
  return sentence;
}

int* random_index_array(int** matrix, int height)
{
  int index = generate_random_integer(0, height - 1);
  return matrix_index_array(matrix, index);
}

int matrix_integer_amount(int** matrix, int height,
  int width, int integer)
{
  int amount = 0;
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    int current = array_integer_amount(array, width,
      integer);
    amount = increase_integer_variable(amount,current);
  }
  return amount;
}
