#include "main.h"
#include <stdlib.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: first value -char
 * @accept: second value - char
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int k = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				k++;
			j++;
		}
		i++;
	       j = 0;
	}
	return (k);
}
