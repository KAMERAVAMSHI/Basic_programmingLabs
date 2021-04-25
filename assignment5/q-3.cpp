//Write a C program to find largest number in an array.
#include<stdio.h>
int main()
{
 
 int a[10] = {65, 68, 14, 20, 99, 100, 56, 131, 47, 90};
 int i, largest;
 largest = a[0];
 for(i = 1; i < 10; i++)
 {
 if( largest < a[i] ) 
 largest = a[i];
 }
 printf("Largest number from the set is: %d", largest); 
 
return 0;
}
