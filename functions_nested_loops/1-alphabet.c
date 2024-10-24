#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase, followed by a new line.
 *
 *
 */
void print_alphabet(void)
{
	char l;

	for (l = 97 ; l <= 122 ; l++)
		_putchar(l);
	_putchar('\n');
}
