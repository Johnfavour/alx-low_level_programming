#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2, 3
 * Description: prints
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
	{
		if (i != '2' && i != '4')
			putchar(i);
	}
	putchar('\n');
}
