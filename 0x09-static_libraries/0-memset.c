#include <stdlib.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: first value
 * @b: second value
 * @n: thirth value
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;
	for (; n > 0; a++)
	{
		s[a] = b;
	}
	return (s);
}
