#include <stdio.h>
int main(void)
{
  /*
   * prints the size of each data type
  */
  char c;
  int i;
  long int li;
  long long int lld;
  float f;
  printf("Size of a char: % byte(s)\n", sizeof(intType));
  printf("Size of an int: %zu byte(s)\n", sizeof(charType));
  printf("Size of a long int: %ld byte(s)\n", sizeof(li));
  printf("Size of a long long int: %lld byte(s)\n", sizeof(lli));
  printf("Size of a float: %f byte(s)\n", sizeof(f));
  return(0);
}
