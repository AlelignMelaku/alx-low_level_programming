#include <stdio.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints prine numbers
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	long x, y;

	x = 612852475143;
	for (y = 2; x > y; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
