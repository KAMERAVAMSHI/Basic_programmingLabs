#include<stdio.h>

int marks[5]; 
int Average(int);
int main()
{
 int i;
 int average;
 
 printf("\n Enter the marks of 5 subjects");
 for(i=0;i<5;i++)
 {
 printf("\n subject[%d]:",i+1);
 scanf("%d",&marks[i]); 
 
 }
 average=Average(5); 
 printf("\n The Average Of Marks is: %d ",average);
 
}
int Average(int n) 
{int avg;
int sum=0;
int i;
 for(i=0;i<n;i++)
 {
 sum = sum + marks[i]; 
 }
 avg=sum/n; 
 return avg;
}

