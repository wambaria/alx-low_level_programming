#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: return length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
