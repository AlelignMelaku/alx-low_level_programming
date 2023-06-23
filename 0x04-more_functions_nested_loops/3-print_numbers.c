#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - list of numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	char i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
