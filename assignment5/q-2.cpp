//Write a C program to find out the average of n numbers using array.


#include<stdio.h>
int main()
{
int a[40];
int i, n;
float avg=0;

    printf("Enter the frequency/number of elements %d",n);
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        avg += a[i];
    }
    avg/=n; 
    printf("\nAverage of elements : %f ", avg);

   
    return 0;

}
