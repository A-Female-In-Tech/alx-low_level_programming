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
	if (n <= 0)
		_putchar('\n');
	else
	{
		int count;

		for (count = 0; count < n; count++)
		{
			int laps = count;

			while (laps > 0)
			{
				_putchar(' ');
				laps--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
