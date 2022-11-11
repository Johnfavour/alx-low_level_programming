#include "main.h"
#include <stdlib.h>
/**
 * array_range - Main Entry
 * @min: input
 * @max: input
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int b, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < l; b++, min++)
	{
		a[b] = min;
	}
	return (a);
}
