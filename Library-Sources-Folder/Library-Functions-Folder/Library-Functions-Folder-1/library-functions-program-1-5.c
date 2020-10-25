
#include "../library-functions-headers.h"

int* generate_random_coordinate(int width, int height)
{
  int r_width = generate_random_integer(0, width - 1);
  int r_height = generate_random_integer(0, height-1);
  return generate_coordinate_variable(r_width,
    r_height);
}

int* generate_random_pair(int minimum, int maximum)
{
  int* pair = generate_random_array(2,minimum,maximum);
  return pair;
}
