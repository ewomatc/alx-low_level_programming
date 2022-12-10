#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Dscription: prints all single digit numbers in base 10 from 0
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
		return (0);
}
