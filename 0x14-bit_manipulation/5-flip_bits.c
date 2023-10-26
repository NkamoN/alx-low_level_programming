#include "main.h"

/**
 * flip_bits - Function returns number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int z = 0;
int countbit = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (z = 63; z >= 0; z--)
{
current = exclusive >> z;
if (current & 1)
countbit++;
}

return (countbit);
}

