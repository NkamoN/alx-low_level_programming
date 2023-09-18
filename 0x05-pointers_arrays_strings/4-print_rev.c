#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int result = 0;
	int o;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	s--;
	for (o = result; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
