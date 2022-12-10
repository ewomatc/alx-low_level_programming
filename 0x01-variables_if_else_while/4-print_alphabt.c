#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Description: print all lowercase letters except e and q
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
