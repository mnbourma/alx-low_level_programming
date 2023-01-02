#include <stdio.h>
/**
 * print_chessboard - prints the chessboard.
 * @a: this is the given board to print.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (int i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		if (i < row - 1)
		{
			putchar('\n');
		}
	}
}
