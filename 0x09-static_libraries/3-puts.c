#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: string input
 * _putchar prints a new line
 * Return: string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
