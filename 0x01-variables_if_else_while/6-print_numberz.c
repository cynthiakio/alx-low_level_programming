#include <stdio.h>
/**
 * main - print all single digits with base 10, start from 0
 *
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
