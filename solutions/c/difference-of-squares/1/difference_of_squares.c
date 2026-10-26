#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
  unsigned int total;
  for (unsigned int i = 1; i <= number; i++) total += (i * i);
  return total;
}
unsigned int square_of_sum(unsigned int number)
{
  unsigned int total;
  for (unsigned int i = 1; i <= number; i++) total += i;
  return total * total;
}
unsigned int difference_of_squares(unsigned int number)
{
  unsigned int sum_square = sum_of_squares(number);
  unsigned int square_sum = square_of_sum(number);
  unsigned int difference = square_sum - sum_square;
  return difference;
}
