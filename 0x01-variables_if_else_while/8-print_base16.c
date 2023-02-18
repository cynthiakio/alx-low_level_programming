#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all single digits of base 16
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
