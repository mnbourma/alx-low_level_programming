#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: ALways 0 (Success)
 **/
int main(int argc, char *argv[])
{
	if (argv[1])
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
