/*
 * Ex7.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program Find Length of String
 */


#include "stdio.h"

int main()
{
	char str[50];
	int i ;
	int sum = 0 ;
	printf("please enter the string: ");
	fflush(stdin);  fflush(stdout);
	gets(str);

	for(i=0; str[i] != '\0' ; i++)
	{
			sum++;
	}
	printf("The Lenth Of String is %d",sum);

	return 0;
}
