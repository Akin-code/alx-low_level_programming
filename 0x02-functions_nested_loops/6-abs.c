#include "main.h"
/**
 * _abs - returns absolute value of n
 * @n: accepts integer value
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
}
