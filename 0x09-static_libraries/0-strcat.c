#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: This is the output dest
 * @src: This is the input source
 * Return: This return to dest, that concatenates two strings
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
