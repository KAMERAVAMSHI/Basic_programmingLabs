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
			
			printf("\n greatest is",a);
		}
		else{
			
			printf("greatest is",c);
		}
	}
	else {
		
		if(b>c)
		{
		printf("greatest is",b);
		}
		else{
			
			printf("greates is",c);
		}
		
	}
	return 0;
}
