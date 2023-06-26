#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @x: input one
 * @y: input two
 * Return: integers
 */
void swap_int(int *x, int *y)
{
	int n;

	n = *x;
	*x = *y;
	*y = n;
}
