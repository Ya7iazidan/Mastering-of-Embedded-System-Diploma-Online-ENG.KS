/*
 * Ex5.c
 *
 *  Created on: Feb 6, 2026
 *      Author: Yahia Zakaria Sultan
 *      C Program to Find ASCII Value of a Character
 */
#include "stdio.h"
int main()
{

	char Ch ;

	printf("Please Enter The Character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &Ch);

	printf(" The Character is '%c' and The ASCII is %d.", Ch, Ch);
}
