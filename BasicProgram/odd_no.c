#include<stdio.h>
int main()
{
	int n=10,i;
	printf("Odd numbers between 1 to %d is \n",n);
	for(i=1;i<n;i=i+2)
	{
		printf("%d\n",i);
	}
	return 0;
}
/*
for(i=1;i<n;i++)
{
	if(i%2!=0)
	{
		printf("%d",i);
	}
}*/
