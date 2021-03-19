//Reads the scores of three different subjects and prints the average.  
#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,avg;
	printf("enter the scores of each subject");
	scanf("%f%f%f",&sub1,&sub2,&sub3);
    avg=sub1+sub2+sub3;
	avg=avg/3;
	printf("the average score is %f",avg);
	
	return 0;
}
