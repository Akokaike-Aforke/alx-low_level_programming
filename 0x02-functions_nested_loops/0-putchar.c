#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
int main(void)
{
	char word[] = "_putchar";

	for (int i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
