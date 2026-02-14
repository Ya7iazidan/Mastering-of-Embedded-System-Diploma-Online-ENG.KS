/*
 * Ex1.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Yahia Zakaria Sultan
 *       C Program to Multidimensional Array 2D
 */

#include "stdio.h"

int main()
{
	float Array_1 [2][2];
	int r , c ;
	float Array_2 [2][2];
	float sum [2][2];


	printf("The Valu for Matrix Number 1.\n");
	for(r=0 ; r<2 ; r++)
	{
		for(c=0 ; c<2 ; c++)
		{
			printf("Please Enter The Valu for Matrix Number 1 (%d , %d) : ", r+1, c+1 );
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &Array_1 [r][c]);
		}
	}


	printf("The Valu for Matrix Number 2.\n");
	for(r=0 ; r<2 ; r++)
	{
		for(c=0 ; c<2 ; c++)
		{
			printf("Please Enter The Valu for Matrix Number 2 (%d , %d) : ", r+1, c+1 );
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &Array_2 [r][c]);
		}
	}


	for(r=0 ; r<2 ; r++)
	{
		for(c=0 ; c<2 ; c++)
		{
			sum [r][c] = Array_1 [r][c] +Array_2 [r][c] ;
		}
	}
	printf("\nsum of matrix is\n");

	for(r=0 ; r<2 ; r++)
	{
		for(c=0 ; c<2 ; c++)
		{
			printf("%f\t", sum[r][c]);
		}
		printf("\n");
	}
	return 0;
}
