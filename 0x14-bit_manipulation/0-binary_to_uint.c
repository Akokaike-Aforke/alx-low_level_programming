#include "main.h"

/**
 * binary_to_uint - converts bin to dec
 * @b: binary number to be converted
 * Return: returns int
 */

unsigned int binary_to_uint(const char *b)
{
	char *c, *a;
	int sum;
	int digit;
	int i;

	c = (char *)malloc(sizeof(b));
	c[0] = '\0';
	strcpy(c, b);
	a = c;
	sum = 0;
	i = strlen(b) - 1;
	while (*a)
	{
		if (*a == '0' || *a == '1')
		{
			digit = (*a - '0') * power(i);
			sum += digit;
			a++;
			i--;
		}
		else
			return (0);
	}
	return (sum);
}

/**
 * power - finds the num raised to k
 * @k: parameter
 * Return: int
 */
int power(unsigned int k)
{
	unsigned int i, res;

	res = 1;
	for (i = 1; i <= k; i++)
	{
		if (k == 0)
			return (0);
		res *= 2;
	}
	return (res);
}
