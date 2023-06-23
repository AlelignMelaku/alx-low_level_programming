#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line
 *
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
			for (c = 2; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
