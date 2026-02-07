/*
 * Ex3.c
 *
 *  Created on: Feb 7, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Check The Largest Number
 */

#include "stdio.h"

int main()
{
	float A, B, C;

	printf("Enter Three Number : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f", &A, &B, &C);

	if( (A >= B && A >= C) )
	{
	printf("The Largest Number is %f", A);
	}

	else if(B >= A && B >= C )
	{
		printf("The Largest Number is %f", B);

	}
	else
	{
		printf("The Largest Number is %f", C);

	}
	return 0;
}
