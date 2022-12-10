#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Description: print characters below 10
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
		return (0);
}
