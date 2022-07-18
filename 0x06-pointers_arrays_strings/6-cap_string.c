#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: result
 */
char *cap_string(char *str)
{
	int num = 0, i;
	int sw[] = (32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125);

	if (*(str + num) >= 97 && *(str + num) <= 122)
		*(str + num) = *(str + num) - 32;
	num++;
	while (*(str + num) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + num) == sw[i])
			{
				if ((*(str + (num + 1)) >= 97) && (*(str + (num + 1)) <= 122))
					*(str + (num + 1)) = *(str + (num + 1)) - 32;
				break;
			}
		}
		num++;
	}
	return (str);
}
