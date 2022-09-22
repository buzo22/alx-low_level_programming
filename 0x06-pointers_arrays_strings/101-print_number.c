#include "main.h"

/**
 * print_number - prints an integer with putchar
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	int a;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
		a = n;
	if (n / 10)
		print_number(a / 10);
	_putchar(a % 10 + '0');
}
