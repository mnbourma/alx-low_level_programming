#include <stdio.h>
/**
 * print_chessboard - prints the chessboard.
 * @a: this is the given board to print.
 */
void print_chessboard(char (*a)[8])
{
	int i, j, col, row;

	col = sizeof(a[0]);
	row = sizeof(a) / col;
	for (int i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			putchar(a[i][j]);
		}
		if (i < row - 1)
		{
			putchar('\n');
		}
	}
}
