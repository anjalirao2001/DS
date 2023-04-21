#include<stdio.h>
int main()
{
	double a,b;
	printf("Enter 1st no : ");
	scanf("%lf",&a);
	printf("Enter 2nd no : ");
	scanf("%lf",&b);
	if(a>b)
	{
		printf("Largest numbers is %lf",a);
	}
	else
	{
		if(b>a)
		{
			printf("Largest no is %lf",b);
		}
		else
		{
			printf("Both no are equal");
		}
	}
	return 0;
}
