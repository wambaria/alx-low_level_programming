#include "main.h"

/**
 * _strstr - locates a substrin
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 * Return: a pointer beg of substring or @Null if it not foound
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
