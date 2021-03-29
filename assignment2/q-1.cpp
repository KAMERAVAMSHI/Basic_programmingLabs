//If a four digit number is input through keyboard, find the sum of its digits. ( Hint : Use % operator)


/*
algorithm:
1-input 4 digit no.
2-logic-first divide by 10 gives remainder as unit digit, and quotient as the next three digit no. continue the recursion
untill u get the quotient as single digit no. and remainder 0
3-output
*/
#include<stdio.h>
int main()
{
  int num,a,sum;
  
  printf("enter the four digit number: %d",num);
  scanf("%d",&num);
  while(num>0)
  {
  	a=num%10;
  	sum+=a;
  	num=num/10;
  }
   printf("sum is %d",sum);
   return 0;
	
}
