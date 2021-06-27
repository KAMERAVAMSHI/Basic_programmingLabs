#include<stdio.h>
int main()
{
int num, reverse=0, rem;
printf("Enter 4 digit number: ");
scanf("%i", &num);
while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num/=10;
}
printf("Reversed Number: %i",reverse);
return 0;
}

