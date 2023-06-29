#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints number
 * @n: the number to process.
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int nm;

	if (n < 10 && n >= 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		nm = -n;
		_putchar('-');
	}
	else
	{
		nm = n;
	}
	if (nm >= 10)
	{
		print_number(nm / 10);
	}
	_putchar('0' + (nm % 10));
}
