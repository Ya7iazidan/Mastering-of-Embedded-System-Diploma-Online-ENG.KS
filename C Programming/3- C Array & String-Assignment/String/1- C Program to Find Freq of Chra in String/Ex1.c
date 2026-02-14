/*
 * Ex6.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Eng Yahia Zakaria Sultan
 */

#include "stdio.h"

int main()
{
	char string[25];
	int i, sum = 0;
	char frq;
	printf("Enter The String: ");
	fflush(stdin);  fflush(stdout);
	gets(string);

	printf("Enter Character To Find Frequency: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c", &frq);

	for(i = 0; string [i] != '\0'; i++)
	{
		if(frq == string[i])
		{
			++sum;
		}
	}
	printf("Frequency of %c = %d", frq , sum);

	return 0;
}
