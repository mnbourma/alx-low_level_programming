#include <stdio.h>
/**
 * main - Entry point
 * Description: prints its name, followed by a new line.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: ALways 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
