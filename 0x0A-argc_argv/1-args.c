#include <stdio.h>

/**
 * main - prints the arguments passd
 * @argc: number of cl arguments
 * @argv: array that contains the programs cl args
 *
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
