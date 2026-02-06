/*
 * Ex3.c
 *
 *  Created on: Feb 6, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Add Two Integers
 */

#include "stdio.h"

int main()
{
	int x , y;
	int sum = 0;
	printf("please enter tow int value:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &x, &y);
	sum = x + y;
	printf("the sum of x and y is = %d", sum);
}
