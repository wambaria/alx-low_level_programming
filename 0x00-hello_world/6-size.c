#include <stdio.h>

/**
 * main - returns the size
 * Returns: 0 if exited properly
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d byte(s)\n", sizeof(long int));
	printf("size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	return(0);
}
