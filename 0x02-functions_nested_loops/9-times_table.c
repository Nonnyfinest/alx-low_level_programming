#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int you, me, us;

	for (you = 0; you <= 9; you++)
	{
		_putchar(48);
		for (me = 1; me <= 9; me++)
		{
			us = you * me;
			_putchar (44);
			_putchar(32);
			if (us <= 9)
			{
				_putchar(32);
				_putchar(us + 48);
			}
			else
			{
				_putchar((us / 10) + 48);
				_putchar((us % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
