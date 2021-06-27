#include<stdio.h>
int main()
{
 int len;
 printf("Enter length of the array: ");
 scanf("%d",&len);
 int arr[len];
 for (int i = 0; i < len; i++)
 {
 printf("Enter the %dth value of array: ",i+1);
 scanf("%d",&arr[i]);
 }
 
 int k;
 printf("Enter the number which is to be inserted: ");
 scanf("%d",&k);
 int p;
 
 for (int i = 0; i < len; i++)
 {
 if(k<arr[i])
 {
 p = i;
 break;
 }
 else
 p = len;
 }
 
 int arr2[len+1];
 arr2[p]=k;
 
 for (int i = 0; i < p; i++)
 arr2[i] = arr[i];
 
 for (int i = p+1; i < len+1; i++)
 arr2[i] = arr[i-1]; 
 
 printf("Array after inserting a new element \n"); 
  for (int i = 0; i < len+1; i++)
 printf("%d ",arr2[i]);
 
 return 0;
}

