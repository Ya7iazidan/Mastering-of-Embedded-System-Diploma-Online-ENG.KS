
/*
 * Ex8.c
 *
 *  Created on: Feb 7, 2026
 *  Author: Eng Yahia Zakaria Sultan
 *  C Program Simple Calculator by using Switch
 */

#include <stdio.h>

int main()
{
    float num1, num2;
    float Result = 0;
    char Choice;

    printf("Please Choose Your Operation: sub(-) | add(+) | mul(*) | div(/)\n");
    fflush(stdin); fflush(stdout);
    scanf(" %c", &Choice);

    printf("Please Enter Value for Number 1: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &num1);

    printf("Please Enter Value for Number 2: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &num2);

    switch (Choice)
    {
        case '-':
            Result = num1 - num2;
            printf("The Result is = %.2f", Result);
            break;

        case '+':
            Result = num1 + num2;
            printf("The Result is = %.2f", Result);
            break;

        case '*':
            Result = num1 * num2;
            printf("The Result is = %.2f", Result);
            break;

        case '/':
            if (num2 != 0)
            {
                Result = num1 / num2;
                printf("The Result is = %.2f", Result);
            }
            else
            {
                printf("Error: Division by zero is not allowed");
            }
            break;

        default:
            printf("Invalid operator entered");
    }

    return 0;
}
