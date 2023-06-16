#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Positive anything is better than negative nothing
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative\n");
	}
	else if (n > 0);
	{
		printf("%d is %s\n", n, "positive\n");
	}
	else
	{
		printf("%d is %s\n", n, "zero\n");
	}
	return (0);
}
