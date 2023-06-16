#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main -entery points.
 * Return: Always (0) Success
 */
int main(void)
{
	int  letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
