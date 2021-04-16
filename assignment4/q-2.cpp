//Write a program in C to find factorial of a number. 

#include<stdio.h>
int main()
{
	int fact=1,n;
	printf("enter the value of the number:");
	scanf("%d",&n);
	for(int num=1;num<=n;num++)
	{
	  fact*=num;	
	}
	printf("factorial of the number is %d",fact);
	
	return 0;
}
