#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * palindrome - helper function for is_palindrome
 * @str: the string
 * @len: length of string
 * @c: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int palindrome(char *str, int len, int c)
{
	if (c >= len)
		return (1);
	if (str[len] == str[c])
		return (palindrome(str, len - 1, c + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int c = 0;

	return (palindrome(s, len - 1, c));
}
