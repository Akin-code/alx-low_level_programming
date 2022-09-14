#include "main.h"
/**
 * Main: DIisplay ailphabets in lower case
 *
 * Description: Calls the function _putchar to display alphabets
 *
 * Return: 0 (success)
 */

void print_alphabet(void)

{
	char i = "a";

	while (i <= "z")

	{
		_putchar(i);
		i++;
	}
	_putchar("/n");
}
