#include <stdio.h>
/*
 * prints the size of each data type
 */
int main(void)
{
  printf("Size of a char: %d byte(s)\n", sizeof(c));
  printf("Size of an int: %d byte(s)\n", sizeof(d));
  printf("Size of a long int: %d byte(s)\n", sizeof(ld));
  printf("Size of a long long int: %d byte(s)\n", sizeof(lld));
  printf("Size of a float: %d byte(s)\n", sizeof(f));
  return (0);
}
