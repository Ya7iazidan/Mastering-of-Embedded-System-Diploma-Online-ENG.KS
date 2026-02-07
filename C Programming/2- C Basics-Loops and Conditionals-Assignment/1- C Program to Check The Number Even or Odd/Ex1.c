/*
 * Ex1.c
 *
 *  Created on: Feb 7, 2026
 *      C Program to Check The Number Even or Odd
 */

#include "stdio.h"

int main()
{
	int num;

	printf("Please Enter Number to Check is Even Or Odd: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);

	if(num %2 == 0)                 // 12%2 == 0
	{
		printf("The Number Entered %d is Even", num);
	}

	else
	{

		printf("The Number Entered %d is odd", num);

	}


	return 0;
}
