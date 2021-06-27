#include<stdio.h>
#include<string.h>
 
int main()
{
    char string1[20],string2[20];  
    int i,j=0;
 
    printf("Enter the string1: ");
    gets(string1);
    printf("Enter the string2: ");
    gets(string2);
    if(strlen(string1)==strlen(string2))
    {
    	for(i=0;string2[i]!='\0';i++)  
        {
        	if(string1[i]==string2[i])
        	 j++;
 	    }
 	    if(j==i)
          printf("strings are equal");
        else
          printf("strings are unequal");
    }
    else
     printf("strings are unequal");
 
    return 0;
}
