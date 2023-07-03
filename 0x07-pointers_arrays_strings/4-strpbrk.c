#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 * @s: first value -char
 * @accept: second value - char
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)

{
	int i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			j++;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
