#include<stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - hPrints the last digit of a randomly generated number
 * Descripions - find solutions for The last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is graeter than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit if %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
