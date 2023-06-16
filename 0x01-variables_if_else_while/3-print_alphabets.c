#include <stdio.h>
/**
 * main - printing Letters Alphabetically both like in abcd..AB
 *
 * Return: Always (0) sucess.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
