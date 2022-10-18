#include "main.h"

/**
 * print_alphabet - print a to z on a new line
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');

	return (0);
}
