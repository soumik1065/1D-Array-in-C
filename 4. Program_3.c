// Printing Array in Reverse Order

#include<stdio.h>
void main()
{
	int arr[5];

	printf("Enter the elements:\n");
	for (int i=0; i<5; i++)
	{
		scanf("%d\n", &arr[i]);
	}

	printf("\nElements in correct order: ");
	for (int i=0; i<5; i++)
	{
		printf("%d\t", arr[i]);
	}

	printf("\nElements in reverse order: ");
	for (int i=5; i>=0; i--)
	{
		printf("%d\t", arr[i]);
	}
	
}