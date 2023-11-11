// Printing Array in Reverse Order

#include<stdio.h>
void main()
{
	int arr[100],n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("\nEnter the elements in the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    
    printf("\nElements of array in the correct order: ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\nElements of  array in reverse order: ");
    for(int i=n; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }
	
}
