#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @c: the number to be shared
 * Return: 1 for positive nums, -1 for negative nums or zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
