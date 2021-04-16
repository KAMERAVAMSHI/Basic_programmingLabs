// Write a program to calculate the sum of first n natural numbers

#include<stdio.h>
int main()
{
	int sum=0;
	int num,n;
	printf("enter the value of n:");
	scanf("%d",&num);
	for(n=0;n<=num;n++)
	{
		sum=sum+n;	
	}
	printf("the sum of first n natural number is %d",sum);
	return 0;
}

