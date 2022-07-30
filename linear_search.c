#include <stdio.h>

int main()
{
int i,n,A[n],data;
printf("Enter size of array\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&A[i]);
}
printf("Enter element to search\n");
scanf("%d",&data);

//linear search logic
for(i=0;i<n;i++)
{
	if(A[i]==data)
	{
		printf("Element found at index %d\n", i+1);
		break;
	}
//printf("Now i= %d\n",i);
}
if(i==n)
{
	printf("Element not found\n");
}
}

//Time Complexity
//Best case: Element found at index 0 i.e. o(1)
//worst case: Element found at index n i.e. o(n)
//Average case: Sum of all cases / Number of cases = 1+2+3+....+n/n= n(n+1)/2*n= (n+1)/2 i.e. o((n+1)/2)
