#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by newline
 */
void print_aphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
