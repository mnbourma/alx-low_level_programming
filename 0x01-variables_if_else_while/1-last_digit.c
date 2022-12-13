#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Print the last digit of a number */
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char digits[] = "" + n + "";

	return (0);
}
