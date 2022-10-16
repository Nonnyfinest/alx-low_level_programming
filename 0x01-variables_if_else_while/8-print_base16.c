#include <stdio.h>

/**
 * main - prints base 16
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 16; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
