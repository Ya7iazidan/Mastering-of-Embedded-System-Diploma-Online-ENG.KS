/*
 * Ex3.c
 *
 *  Created on: Feb 7, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *       C Program to Check a Number is Positive or Negative
 */

#include "stdio.h"

int main()
{
	int number;

	printf("please enter the number to check pos (+) or neg (-) = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number);

	if (number > 0)
	{
		printf("the number is pos (+) = %d ", number);

	}
	else if (number < 0 )
	{
		printf("the number is neg (-) = %d ", number);

	}
	else {
		printf("you entred is zero = %d ", number);

	}
}

