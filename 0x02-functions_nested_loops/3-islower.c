#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: the character
 * Return: 1 (success) or 0 (failed)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
