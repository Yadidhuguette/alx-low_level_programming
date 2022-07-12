#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int num = 0, k;

	while (num >= 0)
	{
		if (str[num] == '\0')
			break;
		num++;
	}

	if (num % 2 == 1)
		k = num / 2;
	else
		k = (num - 1) / 2;

	for (k++; k < num; k++)
		_putchar(str[k]);
	_putchar('\n');
}
