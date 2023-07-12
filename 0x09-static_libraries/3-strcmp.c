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
	int a = 0;

	while (x1[a] != '\0' && x2[a] != '\0')
	{
		if (x1[a] != x2[a])
		{
			return (x1[a] - x2[a]);
		}
		a++;
	}
	return (0);
}
