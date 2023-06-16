#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main  - entery point
 *
 * Return: 0 Always (0) Success
 */
int main(void)
{
	int num1;
	char num2;

	for (num1 = 0; num1 < 10; num1++)
		putchar((num1 % 10) + '0');
	for (num2 = 'a'; num2 <= 'f'; num2++)
		putchar(num2);
	putchar('\n');
	return (0);
}
