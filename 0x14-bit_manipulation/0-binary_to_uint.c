#include "main.h"

/**
 * binary_to_uint - converts bin to dec
 * @b: binary number to be converted
 * Return: returns int
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	
	j = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			j <<= 1;
			if (*b == '1')
			{
				j += 1;
			}
			b++;
		}
		else
			return (0);
	}
	return (j);
}
