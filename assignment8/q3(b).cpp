#include <stdio.h>
void swap(int*, int*);
int main()
{
 int n1, n2;
 printf("Enter the value of n1 and n2\n");
 scanf("%d%d",&n1,&n2);
 printf("Before Swapping\nn1 = %d\nn2 = %d\n", n1, n2);
 swap(&n1, &n2); 
 printf("After Swapping\nn1 = %d\nn2 = %d\n", n1, n2);
 return 0;
}
void swap(int *a, int *b)
{
 int t;
 t = *b;
 *b = *a;
 *a = t; 
}

