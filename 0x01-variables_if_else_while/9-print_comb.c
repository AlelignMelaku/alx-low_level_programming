#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main -prints all possible combinations of single-digit numbers.
 * Return: Always (0) success
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar((number % 10) + '0');
		number++;
		if (number == 10)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
