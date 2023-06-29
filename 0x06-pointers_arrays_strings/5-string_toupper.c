#include  <stdlib.h>
#include "main.h"
/**
 * string_toupper - uppercase all lower case letters in a string.
 * @s: string to process.
 *
 * Return: a pointer.
 */
char *string_toupper(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;
		j++;
	}
	s[j] = '\0';
	return (s);
}
