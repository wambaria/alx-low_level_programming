#include "main.h"
/**
 * print_numbers - print numbers
 * @separator: string to be separated
 * @n: no of integers passed to the functon
 * Return: No return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for(i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("%\n");
	va_end(valist);
}
