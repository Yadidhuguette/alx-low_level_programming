#include <math.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int B);

/**
 * add - adds two numbers
 * @a:- variable a
 * @b:- variable b
 * Return:- sum
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - difference of two numbers
 * @a:- variable a
 * @b:- variable b
 * Return:- difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a:- variable a
 * @b:- variable b
 * Return:- multiplication
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two numbers
 * @a:- variable a
 * @b:- variable b
 * Return: - division of numbers
 */

int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - remainder of two divided number
 * @a:- variable a
 * @b:- variable b
 * return:- remainder
 */

int mod(int a, int b)
{
	if (a != 0)
		return (a % b);
	return (0);
}
