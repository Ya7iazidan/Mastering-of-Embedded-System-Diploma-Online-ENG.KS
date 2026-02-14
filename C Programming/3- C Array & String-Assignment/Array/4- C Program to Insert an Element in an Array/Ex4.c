/*
 * Ex4.c
 * C Program to Insert an Element in an Array
 */

#include <stdio.h>

int main()
{
	int Data[10];
	int i, n, loc;
	int x;

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
		scanf("%d", &Data[i]);
	}

	printf("Please Enter Element to be Inserted: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);

	printf("Please Enter The Location (1 to %d): ", n);
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &loc);

	if (loc < 1 || loc > n + 1)
	{
		printf("Invalid Location!\n");
		return -1;
	}

	for (i = n; i >= loc; i--)
	{
		Data[i] = Data[i - 1];
	}

	Data[loc - 1] = x;
	n++;

	printf("\nArray after insertion:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", Data[i]);
	}

	return 0;
}
