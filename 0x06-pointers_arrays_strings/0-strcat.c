#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int length of string, z;

	length_of_string = 0;
	while (dest(length of string) != '\0')
	{
		length_of_string++;
	}
	for (z = 0; src(z) != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[j];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
