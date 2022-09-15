#include "main.h"
/**
 * _isdigit - checksif an input is digit
 * @c: accepts integer value
 * Return: return 1 if its a digit from 0-9 else returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
