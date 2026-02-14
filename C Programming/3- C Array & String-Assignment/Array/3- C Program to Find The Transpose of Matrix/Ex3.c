/*
 * Ex3.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Find The Transpose of Matrix
 */

#include <stdio.h>

int main()
{
	int column, row, r, c;
	int Matrix_1[5][5], Matrix_2[5][5];

	printf("Please enter the number of rows and columns: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &row, &column);

	if(row <= 0 || row > 5 || column <= 0 || column > 5)
	{
		printf("Invalid!! The Number of Elements Must be Between 1 to 5\n");
		return -1;
	}

	printf("Enter Matrix 1 elements:\n");

	for(r = 0; r < row; r++)
	{
		for(c = 0; c < column; c++)
		{
			printf("Enter Element (%d , %d): ", r+1, c+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &Matrix_1[r][c]);
		}
	}

	printf("\nMatrix 1 is:\n");

	for(r = 0; r < row; r++)
	{
		for(c = 0; c < column; c++)
		{
			printf("%d\t", Matrix_1[r][c]);
		}
		printf("\n");
	}
	printf("\nMatrix 2 (Transpose) is:\n");

	for(r = 0; r < column; r++)
	{
		for(c = 0; c < row; c++)
		{
			Matrix_2[r][c] = Matrix_1[c][r];
			printf("%d\t", Matrix_2[r][c]);
		}
		printf("\n");
	}


	return 0;
}
