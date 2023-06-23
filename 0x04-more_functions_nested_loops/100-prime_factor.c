#include <stdio.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints prine numbers
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	long int num = 612852475143;
	long int prim;

	prim = 3;

	while (prim < num / 2)
	{
		if ((num % prim) == 0)
		{
			if ((prim % 3) == 2)
				printf(",%lu ", prim);
		}
		prim = prim + 2;
	}
	putchar('\n');
	return (0);
}
