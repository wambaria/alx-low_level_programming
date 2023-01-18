#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: char to print
 * Return: 1 0n success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
