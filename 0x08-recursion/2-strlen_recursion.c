#include "main.h"
/**
 * _strlen_recursion - Function Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int s_length= 0;

	if (*s)
	{
		s_length++;
		s_length += _strlen_recursion(s + 1);
	}

	return (s_length);
}
