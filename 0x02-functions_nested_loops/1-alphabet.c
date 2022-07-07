#include "main.h"

/**
 * main - prints the alphabet in lowercase with a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet(void);
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return(0);
}
