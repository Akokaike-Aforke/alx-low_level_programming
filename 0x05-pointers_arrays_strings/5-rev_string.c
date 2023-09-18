#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int j = 0, k, l;
	char m;

	while (s[j] != '\0')
	{
		j++;
	}
	l = j - 1;
	for (k = 0; l >= 0 && k < l; l--, k++)
	{
		m = s[k];
		s[k] = s[l];
		s[l] = m;
	}
}
