//Write a C program  to  create an array of size 10 and print the elements stored in the array.  (For 1D as well as 2D)

#include<stdio.h>
int main()
{
  int a[9], i;

    for(i = 0; i < 10; i++)
    {
        printf("Enter the elements of the array a[%d]: ", i);
        scanf("%d", &a[i]);
    } 

    printf("\nThe elements of the array are as follows: \n\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
  
   return 0;	
}
