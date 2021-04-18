//Write a program in C to find if  entered number is prime or not

#include<stdio.h>
int main()
{
 int num,n ;
 printf("enter the number :");
 scanf("%d",&n);
 
 for(num=2;num<n;num++)
 {
 
     if((n%num)==0)
     {
	 printf("number is not prime");	
	 break;
	 }
	 	
}
    if(n==num)
    {
    	printf("It is prime");
	}
 return 0;	
}
