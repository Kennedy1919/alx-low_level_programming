/*
 * File: 1-alphabet.c
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
