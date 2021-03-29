//.    Write a C program for the following:
//Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
#include<stdio.h>
int main()
{
	float bSalary, dearnessA, houseR, grossS;
	printf("%f enter the basic salary:",bSalary);
	scanf("%f",&bSalary);
	
	dearnessA=(0.4)*bSalary;
	houseR=(0.2)*bSalary;
	grossS=dearnessA+houseR+bSalary;
	printf("gross salary is %f",grossS);
	
	return 0;
	
}

