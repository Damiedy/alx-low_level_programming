#include "main.h"

/**
 * _puts - Print a string followed by a new line on the stout
 *
 * @str: character array value
 *
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] != '\0')
		{
			_putchar(str[len]);

			len++;
		}
	}

	_putchar('\n');
}
