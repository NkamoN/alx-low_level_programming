#include "main.h"
/**
 * puts2 -Prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int result = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		result++;
	}
	x = result - 1;
	for (z = 0 ; z <= x ; z++)
	{
		if (z % 2 == 0)
	{
		_putchar(str[z]);
	}
	}
	_putchar('\n');
}


