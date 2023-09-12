#include <stdio.h>
#include "main.h"
/**
 * int _islower(int c) - check for lower case
 *
 * Return - 0 for lower 1 for upper
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return 1;
	return 0;
}
