#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a string to stdout
 * @str: the string to print
 * Return: a string.
 */
void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
