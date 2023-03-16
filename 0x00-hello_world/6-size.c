#include <stdio.h>
/**
 * main - A program thst prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

