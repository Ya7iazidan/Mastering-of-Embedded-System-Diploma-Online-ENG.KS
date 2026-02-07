/*
 * Ex6.c
 *
 *  Created on: Feb 7, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program100 sum C Program Calculate Sum
 */

#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int i;

    printf("Please enter integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        sum += i;
    }

    printf("The Sum of numbers from 1 to %d is %d", number, sum);

    return 0;
}
