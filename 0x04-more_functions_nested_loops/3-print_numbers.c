#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 with new line.
 * Return: No
 */
void prints_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
