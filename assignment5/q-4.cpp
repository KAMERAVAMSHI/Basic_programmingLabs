#include<stdio.h>
int main()
{
	int a[100];
    int n, i, j, k;
	
	
       printf("sorting the elements of array :\n ");
       

      printf("enter size of array : ");
      scanf("%d", &n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element a[%d] : ",i);
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j] <a[i])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    printf("\nThe elements after sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }
	        printf("\n\n");
}
