#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function written as a parameter
 * @array: input
 * @size: input
 * @action: input
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
