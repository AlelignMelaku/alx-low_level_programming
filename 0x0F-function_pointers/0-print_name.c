#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name- this functions prints a name
 * @name: string to print.
 * @f: this a function pointer, that recieves a string.
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
