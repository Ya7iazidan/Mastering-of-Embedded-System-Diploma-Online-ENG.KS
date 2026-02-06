/*
 * Ex2.c
 *
 *  Created on: Feb 6, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Print a Integer Entered by a User
 */

#include "stdio.h"

int main()
{
	int x;

	printf("Please Enter Integer Value:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);
	printf("The Value of User Entered is = %d", x);

}
