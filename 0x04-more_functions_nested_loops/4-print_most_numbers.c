#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9
 * ignore 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
