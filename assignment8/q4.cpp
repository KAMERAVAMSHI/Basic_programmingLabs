#include<stdio.h>
#include <string.h>
int main()
{ char s[100]; 
 int i,n,j=0;
 printf("Enter the string : ");
 gets(s);
 n=strlen(s);
 for(i=0;i<n/2;i++) 
 {
 if(s[i]==s[n-i-1])
 j++;
}
if(j==i)
 printf("string is palindrome");
 else
 printf("string is not palindrome");
return 0;
}
