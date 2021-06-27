//WAP to enter the details of a student (Name, Roll_number, and Branch) as input through keyboard and print it.

#include<stdio.h>
int main()
{
	char name[20];
	char roll_no[10];
	char branch[20];
	
	printf("Enter your name please:");
	scanf("%s",&name);
	printf("Enter your Roll number:");
	scanf("%s",&roll_no);
	printf("Enter you branch:");
	scanf("%s",&branch);
	
	printf("Your name is %s",name);
	printf("your roll number is %s",roll_no);
	printf("your branch is %s",branch);
}
