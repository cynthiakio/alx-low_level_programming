#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print all single digits of base 10, start from 0
 *
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
