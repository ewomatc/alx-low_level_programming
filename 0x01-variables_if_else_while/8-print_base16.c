#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Description: print numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
