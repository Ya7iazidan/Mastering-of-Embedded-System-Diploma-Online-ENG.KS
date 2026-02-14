/*
 * Ex2.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program Calculate Average Array
 */

#include "stdio.h"

int main()
{
	float data [20];
	int n , i;
	float sum = 0;
	float avg = 0;

	printf("Please Enter The Number of Elments Between 1 to 20: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	if(n <= 0 || n > 20)
	{
		printf("Invalied !! The Number of Elments Must be Between 1 to 20");
		return -1;
	}

	for(i = 0 ; i < n ; i++)
	{
		printf("%d. Enter The Value of Data %d =  ",i+1 , i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&data[i]);
		sum += data [i];

	}
	avg = sum/n;
	printf("\nThe AVG for Data is = %f", avg);
	return 0;
}
