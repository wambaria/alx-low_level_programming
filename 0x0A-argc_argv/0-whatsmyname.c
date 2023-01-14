#include "main.h"

/**
 * main - prints the name as the argumen passed to toit
 * @argc: number of command line arguments
 * @argv: array with command line arguments
 * Return: 0 - success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
