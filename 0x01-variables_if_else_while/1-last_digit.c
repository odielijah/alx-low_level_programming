#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints a number and it's last digit along with whether its
 * last digit is 0, greater than 5, or less than 6 and not 0.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 1)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else

		printf("%d is zero\n", n);

	return (0);
}
