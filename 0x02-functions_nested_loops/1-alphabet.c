#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 * Return :void 
*/

void print_alphabet(void)
{
	char low_alph;

	for (low_alph = 'a'; low_alph <= 'z'; low_alph++)
		_putchar(low_alph);

	_putchar('\n');
}
