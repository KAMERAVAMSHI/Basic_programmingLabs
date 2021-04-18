//Write a program in C to print fibonacci sequence. (0, 1, 1, 2, 3, 5, 8, 13, 21….) upto “n”th term. Given term is sum of its two preceding terms. 

#include<stdio.h>
int main()
{
	int a1=0;
	int a2=1, a3=0, num;
	printf("enter the value of n");
	scanf("%d",&num);
	   
	for(int n=0;n<=num;n++)
	{  
		printf("%d",a3);
		printf("\t");
		a1=a2;
		a2=a3;
	    a3=a1+a2;
		
	}
	return 0;	
}
