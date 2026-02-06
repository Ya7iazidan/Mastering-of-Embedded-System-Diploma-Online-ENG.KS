/*
 * Ex7.c
 *
 *  Created on: Feb 6, 2026
 *      Author: Yahia Zakaria Sultan
 *      C Program to Swap Two Numbers without temp variable
 */

#include "stdio.h"

int main()
{
	int x= 5, y=4 ;

	printf("The Value of x is %d\n", x);
	printf("The Value of y is %d\n", y);

	x = x -1 ;
	y = y + 1 ;

	printf("The Value of x after Swap is \t%d\n", x);
	printf("The Value of y after Swap is \t%d\n", y);
}
