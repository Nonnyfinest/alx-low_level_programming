#include <stdio.h>

/**
 * main - prints lc alpha in reverse
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');

	return (0);
}
