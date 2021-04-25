#include<stdio.h>

 int main()
 {
 int a[25],i,positive=0,negative=0,zero=0, even=0, odd=0;
 for(i=0;i<25;i++)
{
printf("Enter a numbers  : ");
scanf("%d", &a[i]);
}
for(i=0;i<25;i++)
{
if(a[i]>0)
positive++;
if(a[i]<0)
negative++;

if(a[i]==0)
zero++;
if(a[i]%2==0)
 even++;
else
 odd++;
}
printf("\n The set of elements contains the following numbers of");
printf("\n %d positive, %d negative, %d zeroes, %d even and %d odd numbers respectively" ,positive,negative,zero, even, odd);
return 0;
}
