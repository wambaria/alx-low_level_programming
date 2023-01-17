#include "main.h"

/**
 * _isupper - A function that checks the uppercase characters
 * @c: An input character
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
