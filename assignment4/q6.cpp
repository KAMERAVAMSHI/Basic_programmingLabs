/*Write a program in C to display the pattern like right angle triangle with a number. 
 The pattern like : 1
                    1 2
                    1 2 3  */
                    
 #include<stdio.h>
 int main()
 {
 	
 	int n;
 	printf(" %d enter the no. of rows till which you want the triangle to form :");
 	scanf("%d",&n);
 	
 	for(int num=1;num<=n;num++)
 	
 	 {
 	 	for(int num2=1;num2<num;num2++)
 	 	
 	 	{
 	 		printf("%d",num2);
		  }
		  
		  printf("%d",num); 
		  
		  printf("\n");
	  }
 	
 	 return 0;
					}                   

