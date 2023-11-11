// Convert +ve integer to it's corresponding binary number without using array

#include<stdio.h>
#include<math.h>
void main()
{
	int n,i=0,x,s=0,original;
	printf("Enter a +ve integer: ");
	scanf("%d", &n);
	original=n;
	
	while(n!=0)
	{
		x=n%2;
		n=n/2;
		s=s+(pow(10,i) * x);
		i++;
	}

	printf("\nCorresponding binary of %d is: %d",original,s);
	

	
}