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
