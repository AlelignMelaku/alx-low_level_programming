#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check whether the number is positve, negative or zero.
 *
 * return : 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* here it is my code for to dcecide number is positve or negative or zero*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
