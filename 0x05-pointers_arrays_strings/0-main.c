#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - updates the value of n to 98
 * @n: integer pointer to a variable to be updated
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
