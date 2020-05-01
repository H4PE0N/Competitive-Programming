
/*  This program contains functions that deals with
hashlists and manipulation of them. */

#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

int** generate_integer_hashlist(const int length)
{
  return generate_matrix_array(length, 2);
}

int calculate_integer_amount(int* array, int* info)
{
  int number = *(info + 0), amount = 0;
  for(int index = 0; index < *(info + 1); index++)
  {
    if(*(array + index) == number){ amount += 1; }
  }
  return amount;
}

int hashlist_value_exists(int** hashlist, int value)
{
  int index = 0; while(*(*(hashlist + index) + 1) != 0)
  {
    if(*(*(hashlist + index)) == value){return true;}
    index++;
  }
  return false;
}

int calculate_hashvalue_index(int** list, int value)
{
  int index = 0; while(*(*(list + index) + 1) != 0)
  {
    if(*(*(list + index)) == value)
    { return index; } index = (index + 1);
  }
  return -1;
}

int calculate_hashlist_length(int** hashlist)
{
  int index = 0; while(*(*(hashlist + index) + 1) != 0)
  { index++; } return index;
}

int** increment_hashlist_value(int** list, int value)
{
  int index = calculate_hashvalue_index(list, value);
  *(*(list + index) + 1) += 1; return list;
}

int** generate_hashlist_value(int** list, int value)
{
  int length = calculate_hashlist_length(list);
  *(*(list + length) + 0) = value;
  *(*(list + length) + 1) = 1; return list;
}

int** allocate_hashlist_value(int** list, int value)
{
  if(!hashlist_value_exists(list, value))
  {
    list = generate_hashlist_value(list, value);
  } else {
    list = increment_hashlist_value(list, value);
  }
  return list;
}

int** allocate_array_hashlist(int* array, int length)
{
  int** hashlist = generate_integer_hashlist(length);
  for(int index = 0; index < length; index++)
  {
    hashlist = allocate_hashlist_value(
      hashlist, *(array + index));
  }
  return hashlist;
}

int* hashlist_keyword_array(int** hashlist)
{
  int length = calculate_hashlist_length(hashlist);
  int* array = generate_empty_array(length);
  for(int index = 0; index < length; index++)
  {
    *(array + index) = *(*(hashlist + index) + 0);
  }
  return array;
}

/* Made by Roy Hampus Fridholm */
