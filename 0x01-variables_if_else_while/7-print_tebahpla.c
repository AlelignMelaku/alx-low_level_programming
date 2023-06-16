#include <stdlib.h>
#include <stdio.h>
#include<ctype.h>
/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; 'z' >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
