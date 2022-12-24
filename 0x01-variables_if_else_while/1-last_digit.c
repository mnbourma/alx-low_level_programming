#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints the last digit of a number
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	putchar('\n');
	return (0);
}
