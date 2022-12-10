#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Description: print lowercase letters reverse
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 'z'; num >= 'a'; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
