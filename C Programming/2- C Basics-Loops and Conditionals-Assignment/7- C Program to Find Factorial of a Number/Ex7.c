/*
 * Ex7.c
 *
 *  Created on: Feb 7, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Find Factorial of a Number
 */

#include "stdio.h"

int main()
{
	int factorial = 1;
	int  i , number;

	printf("Please Enter The Number for Factorial = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number);

	if(number == 1 || number == 0)
	{
		printf("The User Entered %d The Factorial For 1 and 0 is constant = 1", number);
	}
	else if(number > 1)
	{
		for(i = 1; i <= number; i++)
		{
			factorial *=i ;
		}

		printf("The Factorial For %d  is  = %d", number, factorial);

	}
	else
	{
		printf("Error !!! Factorial of Negative number doesn't exist ");
	}

}
