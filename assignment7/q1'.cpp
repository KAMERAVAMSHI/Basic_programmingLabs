
#include<stdio.h>
int main()
{
    char letter;
    int a,i,factor=0,j,k;
    printf("Enter p to check wether the no. is prime or not .\n");
    printf("Enter f to display all the all the prime factors.\n");
    printf("Enter d to display all the prime numbers\n");
    printf("Enter e to exit the program \n");
    printf("Enter your choice \n");
    scanf("%c",&letter);
    switch (letter)
        {
            case 'p':
                printf("Enter the no. \n");
                scanf("%d",&a);
                k=a/2;
                for(i=2;i<=k;i++)
                    {
                        if(a%i  == 0)
                        {
                         factor=1;
                         break;
                        }
                    }
                if(a==1)
                    {
                    printf("1 is neither prime nor composite.\n");
                    }
                else
                    {   
                    if(factor==1)
                        {
                        printf("%d is not a prime no.\n",a);
                        break;
                        }
                    else
                        {
                        printf("%d is a prime no.\n",a);
                        }
                    }
                break;
            case 'f':
                printf("Enter the no. \n");
                scanf("%d",&a);
                k=a/2;
                for(i=2;i <= k;i++)
                    {
                        if(a%i  == 0)
                        {
                        int fa=0;
                        for(int o=2;o<i;o++)
                            {
                            if(i%o==0)
                                {
                                fa=1;
                                break;
                                }
                            }
                        if(fa==0)
                            {
                            printf("%d ",i);
                            }
                        }
                    }
                break;
            case 'd':
                printf("Enter the no. \n");
                scanf("%d",&a);
                for(int j=1;j<a;j++)
                    {
                    int f=0;
                    for(i=2;i <= j/2 ;i++)
                        {
                            if(j%i == 0)
                            {
                             f=1;
                             break;
                            }
                        }
                    if(f==0)
                        {
                        printf("%d ",j);
                        }
                    }
                break;
            case 'e':
                printf("Exit\n");
                break;
            default :
                printf("enter right choice\n");
        }
}

