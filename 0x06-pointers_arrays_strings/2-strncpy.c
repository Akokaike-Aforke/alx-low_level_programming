#include "main.h"

/**
 *_strncpy - copies a string
 * @src: The source of strings
 * @dest: destination of string
 * @n: The length of int
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
