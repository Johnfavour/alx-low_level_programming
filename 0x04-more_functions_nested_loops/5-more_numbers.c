#include "main.h"

/**
 * more_numbers - prints the numbers 0 through 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; ++j)
	{
		for (i = 0; i < 15; ++i)
		{
			if (i > 9)
				putchar('0' + i / 10);
			putchar('0' + i % 10);
		}
		putchar('\n');
	}
}
