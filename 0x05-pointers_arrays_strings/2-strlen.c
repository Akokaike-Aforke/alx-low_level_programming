#include <stdio.h>
/**
 *_strlen - returns length of a string
 *@s: length of string to return
 *
 * Return: void
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
