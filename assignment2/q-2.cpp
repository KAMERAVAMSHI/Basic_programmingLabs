//Write a c program to perform following and print the value:
      //  (a) addition, subtraction, multiplication and division of two integers: 32 &78    

#include<stdio.h>
int main()
{
	int num1=32;
	int num2=78;
	int add,sub,mult;
	float div;
	add=num1+num2;
	sub=num2-num1;
	mult=num1*num2;
	div=num2/num1;
	
	printf("\n Addition is :%d",add);
	printf("\n Subtraction is: %d",sub);
	printf("\n multiplication is: %d",mult);
	printf("\n division is: %f \n",div);
	
	return 0;
}
