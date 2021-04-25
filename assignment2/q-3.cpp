/*Write a C program to swap two numbers. 
Eg : a =10 , b=20 . ( before swap)a=20, b=10 (after swap)
*/
#include<stdio.h>
int main()
{
int num1,num2;
	printf("%d Enter the value of num1: ",num1);
	scanf("%d",&num1);
	printf("\n %d Enter the value of num2:",num2);
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("new value of num1 is:%d",num1);
	printf("\n new value of num2 is:%d",num2);

	
	return 0;
	
}

