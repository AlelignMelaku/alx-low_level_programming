#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen -show the length of strings
 * @s: strings
 * Return: length of strings
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
