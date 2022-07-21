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
 * cmpfunction - compare character of the string
 * @s: string
 * @l1: small character
 * @l2: biggest character
 * Return: result
 */
int cmpfunction(char *s, int l1, int l2)
{
	if (*(s + l1) == *(s + l2))
	{
		if (l1 == l2 || l1 == l2 + 1)
			return (1);
		return (0 + cmpfunction(s, l1 + 1, l2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 for a palindrome and 0 if not
 * @s: string
 * Return: 1 for a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (cmpfunction(s, 0, _strlen_recursion(s) - 1));

}
