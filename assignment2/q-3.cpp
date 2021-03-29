/*Write a C program to swap two numbers. 
Eg : a =10 , b=20 . ( before swap)a=20, b=10 (after swap)
*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("%d Enter the value of a: ",a);
	scanf("%d",&a);
	printf("\n %d Enter the value of b:",b);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("new value of a is:%d",a);
	printf("\n new value of b is:%d",b);
	
	return 0;
	
}

