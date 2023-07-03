#include <stdlib.h>
#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: first value -char
 * @needle: second value - char
 * Return: char with result
 */
char *_strstr(char *haystack, char *needle)
{
	int m = 0, a = 0, k, j = 0, l, i = 0;
	char *p;

	while (needle[m] != '\0')
	{
		m++;
	}
	while (haystack[i] != '\0')
	{
		i++;
	}
	if (m == 0)
		return (haystack);
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			p = &haystack[j];
			i = j;
			a = 0;
			for (k = 0; k < m; k++)
			{
				if (haystack[l] == needle[k])
					a++;
				l++;
			}
		}
		if (a == m)
			return (p);
		j++;
	}
	return ('\0');
}
