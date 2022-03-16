/*
 * File: 1-alphabet.c
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void);
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
		putchar(e);

	putchar('\n');
}
