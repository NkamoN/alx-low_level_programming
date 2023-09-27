#include "main.h"
/**
 * _strlen_recursion - Function Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int c_length= 0;

	if (*s)
	{
		c_length++;
		c_length += _strlen_recursion(s + 1);
	}

	return (c_length);
}
