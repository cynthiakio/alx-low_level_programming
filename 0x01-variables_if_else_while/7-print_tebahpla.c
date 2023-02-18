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
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
