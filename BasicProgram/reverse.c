#include<stdio.h>
/* REVERSE A NUMBER USING FOR
int main()
{
	int i,num,rev=0,ln,temp;
	printf("Enter a num : ");
	scanf("%d",&num);
	temp=num;
	for(i=0;num>0;i++)
	{
		ln=num%10;
		rev=rev*10+ln;
		num=num/10;
	}
	printf("Reverse of %d is %d",temp,rev);
	return 0;
}
*/

/*REVERSE A NUMBER USING WHILE
int main()
{
	int i,num,rev=0,ln,temp;
	printf("Enter a num : ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		ln=num%10;
		rev=rev*10+ln;
		num=num/10;
	}
	printf("Reverse of %d is %d",temp,rev);
	return 0;
}
*/
//REVERSE A NUMBER USING DO-WHILE
int main()
{
	int i,num,rev=0,ln,temp;
	printf("Enter a num : ");
	scanf("%d",&num);
	temp=num;
	do
	{
		ln=num%10;
		rev=rev*10+ln;
		num=num/10;
	}while(num!=0);
	printf("Reverse of %d is %d",temp,rev);
	return 0;
}



