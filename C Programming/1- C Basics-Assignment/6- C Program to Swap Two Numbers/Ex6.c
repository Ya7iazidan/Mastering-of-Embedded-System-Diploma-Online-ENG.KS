/*
 * Ex6.c
 *
 *  Created on: Feb 6, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Swap Two Numbers
 */

#include "stdio.h"

int main()
{
	float A, B ;
	float Temp = 0;

	printf("Please Enter The Value of A : \n");
	fflush(stdin); fflush(stdout);
	scanf("%5f", &A);
	printf("Please Enter The Value of B : \n");
	fflush(stdin); fflush(stdout);
	scanf("%5f", &B);

	Temp = A ;
	A = B ;
	B = Temp;

	printf("The Value of A After Swapping :%5f\n", A);
	printf("The Value of B After Swapping :%5f\n", B);

}
