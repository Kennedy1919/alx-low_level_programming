#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int r = 0;
	char s;

	while (r <= 9)
	{
	for (s = 'a'; s <= 'z'; s++)
		_putchar(s);
	_putchar('\n');
	r++;
	}
}
