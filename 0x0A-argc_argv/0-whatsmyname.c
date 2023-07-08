#include <stdio.h>
/**
 * main - prints the name of the program, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: arrray that contains the program command line arguments.
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	 printf("%s\n", *argv[0]);

	 return (0);
}
