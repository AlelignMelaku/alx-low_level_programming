#include <stdlib.h>
#include "main.h"
/**
 * _strcpy - Copiar el contenido de uno a otra variable
 * @dest: This is destiny
 * @src: This is the copia
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; a++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
