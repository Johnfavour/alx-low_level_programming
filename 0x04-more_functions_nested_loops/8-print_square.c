#include "main.h"

/**
 * print_square - print a square in the terminal
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int linenum;
	int linelen;

	for (linenum = 0; linelen < size; ++linenum)
	{
		for (linelen = 0; linelen < size; ++linelen)
			putchar('#');
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
