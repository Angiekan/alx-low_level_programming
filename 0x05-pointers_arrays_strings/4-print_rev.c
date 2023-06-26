#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse a string
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	for (i -= 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
