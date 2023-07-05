#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @g: the number to calculate the factorial
 *
 * Return: integer value
 */
int factorial(int g)
{
	if (g < 0)
		return (-1);
	if (g <= 1)
		return (1);

	return (g * factorial(g - 1));
}
