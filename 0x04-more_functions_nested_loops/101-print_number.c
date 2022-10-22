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
	int a, b;

	b = 10;

	if (n < 10 && n >= 0)
	{
		putchar(n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		putchar('-');
		putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			putchar('-');
		}
		m = n;
		while (m / b > 9)
		{
			b = b * 10;
		}
		while (b > 0)
		{
			a = m / b;
			m = m % b;
			putchar(a + '0');
			b = b / 10;
		}
	}
}
