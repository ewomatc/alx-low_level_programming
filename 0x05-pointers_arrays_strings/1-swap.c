#include "main.h"
/**
 * swap_int - swaps values of integers
 * @a: first integer
 * @b: scond integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
