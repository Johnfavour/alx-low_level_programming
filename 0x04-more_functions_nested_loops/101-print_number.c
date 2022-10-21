#include "main.h"

/**
 * print_number - print an integer (with no trailing newline)
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		putchar(45);
		m = -n;
	}
	if (m / 10)
		print_number(m / 10);
	putchar((m % 10) + '0');
}
