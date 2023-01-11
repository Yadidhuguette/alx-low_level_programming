#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: input string
 */
void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
