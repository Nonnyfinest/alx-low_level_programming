#include "main.h"

/**
 * print_numbers - entry
 * prints from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
