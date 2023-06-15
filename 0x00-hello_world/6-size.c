#include <stdio.h>
/**
 * main - C program that prints the size of various of computer
 * Return: 0
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int w;
	float r;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(r));
return (0);
}
