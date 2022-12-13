#include <stdio.h>

/**
 * main - prints all possible comninations of single digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 60; n < 70; n++)
	{
		putchar(n);
		if (n != 69)
		{
			putchar(',')
			putchar(' ')
		}
	}
	putchar('\n')
		return (0)
}
