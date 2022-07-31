#include <stdio.h>

int main()
{
	int i,n,array[50],flag,temp,j;
	printf("Enter how many elements in an array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}

	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}

	printf("Sorted array is :\n");
	for(i=0;i<n;i++)
		printf("%d\t", array[i]);
	
	return 0;

}
