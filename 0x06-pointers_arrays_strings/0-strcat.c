#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: origin
 * Return: The rsulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int num =0, num1 = 0;

	while (dest[num++])
		num1++;
	for (num = 0; src[num]; num++)
		dest[num1++] = src[num];
	return(dest);
}
