#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Description: prints numbers comination
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(', ');
		}
	}
	putchar('\n');
	return (0);
}
