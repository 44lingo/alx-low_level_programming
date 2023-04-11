#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
