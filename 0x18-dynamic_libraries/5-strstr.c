#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *shaystack;
	char *tneedle;

	while (*haystack != '\0')
	{
		shaystack = haystack;
		tneedle = needle;

		while (*haystack != '\0' && *tneedle != '\0' && *haystack == *tneedle)
		{
			haystack++;
			tneedle++;
		}
		if (!*tneedle)
			return (shaystack);
		haystack = shaystack + 1;
	}
	return (0);
}
