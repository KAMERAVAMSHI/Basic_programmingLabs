//Read your name, roll number and branch and print it.

#include<stdio.h>
int main()
{
	char name[20];
	char roll[10];
	char branch[20];
	printf("enter your name, roll number, branch");
	scanf("%s%s%s",&name,&roll,&branch);
	printf("My name is %s",name);
	printf("\n"); 
	printf("My roll number is %s:",roll);
	printf("\n");
	printf("My branch is %s",branch);
	return 0;
}
