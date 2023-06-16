#include <stdio.h>
#include <ctype.h>
/**
 * main - entery point
 *
 * Return: Always O success
 */
int main(void)
{
	char letter = 'a';

	while  (letter <= 'z')
	{
		putchar(letter);
		letter += 1;
	}
	putchar('\n');
	return (0);
}
