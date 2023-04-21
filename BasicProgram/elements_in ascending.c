#include<stdio.h>
int main()
{
	int arr[10],i,j,num,temp;
	printf("Enter no of elements in array to arrange in ascending order : ");
	scanf("%d",&num);
	printf("\nEnter elements : ");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nElements in Ascending Order : ");
	for(i=0;i<num;i++)
	{
		printf("\n%d",arr[i]);
	}
	return 0;
}
