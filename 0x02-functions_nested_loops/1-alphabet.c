#include "main.h"

/**
 * print_alphabet - Prints Alphabets
 *
 * Description: Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0(Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= '2'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
