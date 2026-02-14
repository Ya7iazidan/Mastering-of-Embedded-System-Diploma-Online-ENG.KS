/*
 * Ex8.c
 *
 *  Created on: Feb 14, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program Reveres String
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	int i;
	printf("please enter the string: ");
	fflush(stdin);  fflush(stdout);
	gets(str);

    printf("revers string is: ");
    for(i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;

}
