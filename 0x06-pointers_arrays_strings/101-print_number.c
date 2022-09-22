#include "main.h"

/**
 * print_number - prints an integer with putchar
 * @n: number to print
 * Return: no return
 */
int print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('_');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

}
