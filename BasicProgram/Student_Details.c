
//Structure Program for Student Details in C

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[20];
    int age;
    int marks;
};


int main()
{
    struct Student s1,s2,s3;

    printf("\nEnter name of first student : ");
    scanf("%s",&s1.name);

    printf("\nEnter age of first student : ");
    scanf("%d",&s1.age);


    printf("\nEnter marks of first student: ");
    scanf("%d",&s1.marks);

    printf("\nEnter name of second student : ");
    scanf("%s",&s2.name);

    printf("\nEnter age of second student : ");
    scanf("%d",&s2.age);

    printf("\nEnter marks of second student : ");
    scanf("%d",&s2.marks);

    printf("\n Enter name of third student : ");
    scanf("%s",&s3.name);

    printf("\n Enter age of third student : ");
    scanf("%d",&s3.age);

    printf("\n Enter marks of third student : ");
    scanf("%d",&s3.marks);


    printf("\n Name of first student : %s",s1.name);

    printf("\n age of first student : %d",s1.age);

    printf("\n marks of first student: %d \n",s1.marks);

    printf("\n Name of first student : %s",s2.name);

    printf("\n age of first student : %d",s2.age);

    printf("\n marks of first student: %d \n",s2.marks);

     printf("\n Name of first student : %s",s3.name);

    printf("\n age of first student : %d",s3.age);

    printf("\n marks of first student: %d \n",s3.marks);

    return 0;
}
