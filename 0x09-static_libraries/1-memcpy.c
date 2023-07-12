#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - function that copies memory area
 * @dest: the address of memory to print
 * @src: second value
 * @n: thirth value
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
