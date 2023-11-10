// How to initialize every element of an array with same number

#include<stdio.h>
void main()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		arr[i]=10;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
	
}