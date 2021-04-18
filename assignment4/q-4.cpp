//Write a program in C to reverse a given number.

#include<stdio.h>
int main()
{
	int num,last,num2=0;
	printf("Enter the number you want to get eversed:");
	scanf("%d",&num);
	
		while(num!=0)
	{
		
		last=num%10;
		num2=num2*10+last;
		num/=10;	
	}
	
	printf("the reverse of the number %d",num2);		
    return 0;	
}
