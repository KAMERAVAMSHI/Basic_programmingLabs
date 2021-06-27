//WAP to count number of vowels and consonants in a string

#include<stdio.h>
#include<string.h>
int main()
{
	char word[20];  
    int i,vowels=0,consonants=0;
 
    printf("Enter  the string :) ");
    gets(word);
     
    for(i=0;word[i];i++)  
    {
    	if((word[i]>=65 && word[i]<=90)|| (word[i]>=97 && word[i]<=122))
    	{
		
            if(word[i]=='a'|| word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O' ||word[i]=='U')
		      vowels++;
            else
             consonants++;
        }
 
 	}
 	
     
    printf("number of vowels %d\n",vowels);
    printf("number of consonants %d\n",consonants);
    
    return 0;
}
