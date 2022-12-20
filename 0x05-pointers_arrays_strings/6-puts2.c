#include "main.h"

/**
 * puts2 - prints alternating characters of string
 * @s: string
 * @Return: void
 */

void puts2(char *str)
{
	int i;

	int 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n')
}
