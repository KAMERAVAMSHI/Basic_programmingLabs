#include<stdio.h>
int main()

{
    int i,j,k,row, n=1;
    printf("enter row");
    scanf("%d",&row);
    printf("\n");
    for(i=1;i<=row;i++)
      {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
            {
              printf("%d ",n);
              n=n+2;
            }
        printf("\n");
      }
    return 0;

}

