// Convert +ve integer to it's corresponding binary number

#include<stdio.h>
void main()
{
	int n,i=0,arr[20];
	printf("Enter a +ve integer: ");
	scanf("%d", &n);

	while(n!=0)
	{
		arr[i]=n%2;
		n=n/2;
		i++;
	}

	printf("\nCorresponding binary of %d is: ",n);
	for (int j=i-1; j>=0; j--)
	{
		printf("%d", arr[j]);
	}

	
}