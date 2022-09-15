/**
 * File: 7-print_diagonal.c
 */

#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int i = 1;

	if (n > 0)
	{
		_putchar(92);

		while (i < n)
		{
			int count = 0;

			_putchar('\n');
			while (count < i)
			{
				_putchar(' ');
				count++;
			}
			_putchar(92);
			i++;
		}
	}
	_putchar('\n');
}
