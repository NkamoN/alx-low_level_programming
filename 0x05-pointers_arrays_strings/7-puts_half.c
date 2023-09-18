#include "main.h"
/**
 * puts_half - Prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x;
	int y;
	int result;

	result = 0;

	for (x = 0; str[x] != '\0'; x++)
		result++;

	y = (result / 2);

	if ((result % 2) == 1)
		y = ((result + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
