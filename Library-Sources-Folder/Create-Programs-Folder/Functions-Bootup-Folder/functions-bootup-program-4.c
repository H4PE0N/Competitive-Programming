
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

#include "../../Functions-Testing-Folder/\
functions-testing-headers.h"

int main(int argc, char** argv)
{
  srand(time(NULL));

  int first = 48, second = 57;
  char* string = string_between_integers(first, second);
  int length = character_string_length(string);

  character_string_stdout(string, length + 1, true, true);

  return 0;
}
