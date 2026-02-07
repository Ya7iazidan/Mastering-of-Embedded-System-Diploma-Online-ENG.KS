/*
 * Ex5.c
 *
 *  Created on: Feb 7, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Check The Alphabet or not
 */


#include "stdio.h"

int main()
{
	char ch;

	printf("please enter the character = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &ch);

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("%c is an alphabet. ", ch);

	}

	else {
		printf("%c is not character. ", ch);

	}
}
