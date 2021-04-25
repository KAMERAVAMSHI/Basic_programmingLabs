#include<stdio.h>
int main() 
{
   int a[10], i, j, k, size;
 
   printf("Enter the size of an array \t: ");
   scanf("%d",&size);
 
   
   for (i = 0; i < size; i++) 
   {
      scanf("%d", &a[i]);
   }
 
   j = i - 1;   
   i = 0;       
 
   while (i < j) 
   {
      k = a[i];
      a[i] = a[j];
      a[j] = k;
      i++;             
      j--;         
   }
 
   printf("\nReverse of the array is: ");
   for (i = 0; i < size; i++) 
   {
      printf("%d \t", a[i]);
   }
 
   return 0;
}

