#include <stdio.h>
void swap(int a, int b);
int main()
{
	int i,n,array[50],min,j,temp;

	printf("Enter how many elements in an array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}

	//logic for selection sort
	for(i=0;i<n-1;i++)//outer loop for number of passes
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
		}

	}

	printf("Sorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}

//time complexity for all cases : o(n^2)
