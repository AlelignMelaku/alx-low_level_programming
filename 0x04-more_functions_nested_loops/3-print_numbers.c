#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - list of numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	int  num = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
