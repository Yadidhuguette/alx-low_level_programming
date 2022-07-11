#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character
 * @c: the character to be printed
 *
 * Return: on Success 1.
 * on error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
