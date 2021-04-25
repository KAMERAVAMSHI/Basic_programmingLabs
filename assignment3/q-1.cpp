//WAP to find the maximum of three numbers using Nested If Else. 

#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	printf("enter the value of a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c){
			
			printf("\n greatest is %d",a);
		}
		else{
			
			printf("greatest is %d",c);
		}
	}
	else {
		
		if(b>c)
		{
		printf("greatest is %d",b);
		}
		else{
			
			printf("greates is %d",c);
		}
		
	}
	return 0;
}
