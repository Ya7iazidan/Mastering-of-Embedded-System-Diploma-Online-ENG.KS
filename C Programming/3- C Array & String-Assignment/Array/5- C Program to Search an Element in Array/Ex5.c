/*
 * Ex5.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Eng Yahia Zakaria Sultan
 *      C Program to Search an Element in Array
 */


#include <stdio.h>

int main()
{
	int array[10];
	int n, i;
	int seh;
	int found = 0;

	printf("Please Enter Number of Elements Between 1 to 10: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	if (n <= 0 || n > 10)
	{
		printf("Invalid!! The Number of Elements Must be Between 1 to 10\n");
		return -1;
	}

	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i + 1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &array[i]);
	}

	printf("\nArray Elements:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\nPlease Enter Number to be searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &seh);

	for (i = 0; i < n; i++)
	{
		if (seh == array[i])
		{
			printf("The Number Found at Location: %d\n", i + 1);
			found = 1;
			break;
		}
	}

	if (found == 0)
	{
		printf("Number not found.\n");
	}

	return 0;
}
