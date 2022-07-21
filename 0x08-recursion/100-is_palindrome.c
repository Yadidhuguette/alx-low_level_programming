#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * p - palindrome
 * @s: string
 * @n: possibility
 * Return: bool
 */
int p(char *s, int n)
{
	if (n < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (p(s + 1, 1 - 2));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 for a palindrome and 0 if not
 * @s: string
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p(s, len - 1));
}
