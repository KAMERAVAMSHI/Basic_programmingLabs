//WAP to check if a string is palindrome or not.

#include<stdio.h>
#include <string.h>
int main()
{

    char word[20];  
    int i,len,j=0;
 
    printf("Enter  the string : ");
    gets(word);
    len=strlen(word);
 
    for(i=0;i<len/2;i++)  
    {
    	if(word[i]==word[len-i-1])
    	j++;
 
 	}
 	if(j==i)
 	    printf("string is palindrome:)");
    else
        printf("string is not palindrome:(");
 
 	 
     
    return 0;
}
