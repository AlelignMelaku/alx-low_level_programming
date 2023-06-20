#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 *
 * Return: Always
 */
void print_alphabet_x10(void)
{
	char b;
	int i = 1;

	for (i = 1; i <= 10; i++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}

}
