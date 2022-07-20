#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: resulting string
 */
char *rot13(char *str)
{
	int num = 0, i;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + num) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + num) == alphabet[i])
			{
				*(str + num) = rot13[i];
				break;
			}
		}
		num++;
	}
	return (str);
}
