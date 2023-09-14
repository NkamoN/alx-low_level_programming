#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1;
	long int max;
	long int i;

	num1 = 612852475143;
	max = -1;

	while (num1 % 2 == 0)
	{
		max = 2;
		num1 /= 2;
	}

	for (i = 3; i <= sqrt(num1); i = i + 2)
	{
		while (num1 % i == 0)
		{
			max = i;
			num1 = num1 / i;
		}
	}

	if (num1 > 2)
		max = num1;

	printf("%ld\n", max);

	return (0);
}

