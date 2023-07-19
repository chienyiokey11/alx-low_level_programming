#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - printing the last digit of a random number
 *
 * Return: (0) always success
 */
int main(void)
{
	int n;
	int rim;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rim = n % 10;
	if (rim > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, rim);
	}
	if (rim == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, rim);
	}
	if (rim < 6 && rim != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, rim);
	}
	return (0);
}
