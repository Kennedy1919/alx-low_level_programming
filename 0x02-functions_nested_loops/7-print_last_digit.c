#include "main.h"

/**
 * print_last_digit - Check main
 * @r: An integer input
 * Description: This fuction prints the last digit of a number
 * Retuen: last digit of number r
 */
int print_last_digit(int r)
{
	int n;

	if (r < o)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}