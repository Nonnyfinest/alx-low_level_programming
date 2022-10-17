#include <stdio.h>

/**
 * main - Entry point
 * autor: Nonny
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Nonny;

	for (Nonny = 48; Nonny < 58; Nonny++)
	{
		putchar(Nonny);
		if (Nonny != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
