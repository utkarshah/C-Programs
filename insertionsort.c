#include <stdio.h>

int main()
{
	int i,n,Array[20],temp,j;
	printf("Enter how many elements in an array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&Array[i]);
	}

	//logic for insrtion sort
	for(i=1;i<n;i++)
	{
		temp=Array[i];
		j=i-1;

		while(j>=0 && Array[j]>temp)
		{
			Array[j+1]=Array[j];
			j--;
		}

		Array[j+1]=temp;
	}

	printf("Sorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",Array[i]);
	}
}
