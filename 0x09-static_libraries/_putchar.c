#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * _putchar. writes the character c to stdout
 * print_rev - print_rev
 * @c : the character points
 * Return: on Success 1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
