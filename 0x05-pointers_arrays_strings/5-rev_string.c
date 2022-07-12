#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	int num = 0, k, l;
	char *str, temp;

	while (num >= 0)
	{
		if (s[num] == '\0')
			break;
		num++;
	}
	str = s;

	for (k = 0; k < (num - 1); k++)
	{
		for (l = k + 1; l > 0; l--)
		{
			temp = *(str + l);
			*(str + l) = *(str + (l - 1));
			*(str + (l - 1)) = temp;
		}
	}
}
