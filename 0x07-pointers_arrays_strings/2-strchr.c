#include <stdio.h>

/**
 * _strchr - multiplies two digits
 * @s: 1st digit in the multiplication
 * @c: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
