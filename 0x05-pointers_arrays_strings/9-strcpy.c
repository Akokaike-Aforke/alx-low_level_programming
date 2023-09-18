#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies string pointed to by src
 * @dest: string to be pointed at
 * @src: pointer
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
