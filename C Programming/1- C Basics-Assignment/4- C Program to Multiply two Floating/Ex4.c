/*
 * Ex4.c
 *
 *  Created on: Feb 6, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Multiply two Floating Point Numbers
 */

#include "stdio.h"

int main()
{
	float x , y;
	float Product = 0;
	int i = 1;

	printf("Enter Tow Value of %d : ", i);
	fflush(stdin); fflush(stdout);
	scanf("%f", &x);

	printf("Enter Tow Value of %d : ", i+1);
	fflush(stdin); fflush(stdout);
	scanf("%f", &y);

	Product = x * y ;

	printf(" the Product is = %5f", Product);
}
