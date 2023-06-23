#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_line -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(5);
		}
	}
	_putchar('\n');
}
