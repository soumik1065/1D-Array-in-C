// Find the greatest element in the array

#include<stdio.h>
void main()
{
	int arr[100],n,temp;

	printf("\nEnter the size of the array: ");
	scanf("%d", &n);

	printf("Enter the elements:\n");
	for (int i=0; i<n; i++)
	{
		scanf("%d\n", &arr[i]);
		temp=arr[0];
	}

	printf("\nElements in correct order: ");
	for (int i=0; i<n; i++)
	{
		printf("%d\t", arr[i]);
	}


	for (int i=1; i<n; i++)
	{
		if(arr[i]>temp)
		{
			temp=arr[i];
		}

	}

	printf("\nGreatest number: %d", temp);

	
}