#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: the result's storage buffer
 * @size_r: size of the buffer
 * Return: The resulting r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, ab, ad, ar1, ar2, count = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= a2)
		ad = a1;
	else
		ad = a2;
	if (size_r <= ad + 1)
		return (0);
	r[ad + 1] = '\0';
	a1--, a2--, size_r--;
	ar1 = *(n1 + a1) - 48, ar2 = *(n2 + a2) - 48;
	while (ad >= 0)
	{
		ab = ar1 + ar2 + count;
		if (ab >= 10)
			count = ab / 10;
		else
			count = 0;
		if (ab > 0)
			*(r + ad) = (ab % 10) + 48;
		else
			*(r + ad) = '0';
		if (a1 > 0)
			a1--, ar1 = *(n1 + a1) - 48;
		else
			ar1 = 0;
		if (a2 > 0)
			a2--, ar2 = *(n2 + a2) - 48;
		else
			ar2 = 0;
		ad--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
