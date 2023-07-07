#include <stdlib.h>
#include "main.h"
/**
 * _strcmp - compare 2 strings.
 * @x1: string to be compared.
 * @x2: string for comparation.
 * Return: Difference.
 */
int _strcmp(char *x1, char *x2)
{
	while ((*x1 != '\0' && *x2 != '\0') && *x1 == *x2)
	{
		x1++;
		x2++;
	}
	if (*x1 == *x2)
	{
		return (0);
	}
	else
	{
		return (*x1 - *x2);
	}
}
