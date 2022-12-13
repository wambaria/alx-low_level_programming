#include <stdio.h>

/**
 * *main - prints all numbers of base 16 in lowercase
 * Return
 */
int main(void)
{
	int n;
	char ch;

	for (n = 60; n < 70; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
