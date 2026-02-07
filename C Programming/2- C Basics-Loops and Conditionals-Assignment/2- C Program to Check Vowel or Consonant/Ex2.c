/*
 * Ex2.c
 *
 *  Created on: Feb 7, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Check Vowel or Consonant
 */

#include "stdio.h"

int main()
{
	char c ;

	printf("Please Enter The Alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
	{
		if ( (c == 'A') || (c == 'a') ||
				(c == 'E') || (c == 'e') ||
				(c == 'I') || (c == 'i') ||
				(c == 'O') || (c == 'o') ||
				(c == 'U') || (c == 'u') )

		{
			printf("The Alphabet you Entered %c is a Vowel. ", c);
		}
		else {
			printf("The Alphabet you Entered %c is a Consonant. ", c);
		}

	}
	else
	{
		printf("%c That Not Vocabulary . ", c);
	}
	return 0;
}
