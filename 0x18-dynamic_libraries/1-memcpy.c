#include "main.h"
/**
 *_memcpy -Function that copies memory area
 *@dest:Where memory is stored
 *@src:Where memory is copied
 *@n: Number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
