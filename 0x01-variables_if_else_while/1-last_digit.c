#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - detrmines last digit of variable,
 * if greater than 6,less, or equal zero
 * Return:
 * betty style doc for function main goes there
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* variable last_num declaration */

	int last_num = n % 10;

	if (last_num > 5)
	  printf("The last digit of %d is %d and is greater than 5\n", n, last_num);
	else if (last_num == 0)
	  printf("The last digit of %d is %d and is equal to 0\n", n, last_num);
	else if (6 > last_num != 0)
	  printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last_num);

	return (0);
}
