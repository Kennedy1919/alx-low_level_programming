#include "main.h"

/**
 * print_alphabet - in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
		_putchar(e);

	_putchar('\n');
}
