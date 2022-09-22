#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination variable
 * @src: source variable
 * Return:(dest)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int b = 0;
	int j;

	for (j = 0; *(dest + 1) != '\0'; j++)
	{
		b++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + b) = *(src + i);
		b++;
	}
	return (dest);
}
