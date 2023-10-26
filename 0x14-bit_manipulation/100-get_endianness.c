#include "main.h"

/**
 * get_endianness - Function checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *y;

	i = 1;
	y = (char *)&i;
	return (*y);
}

