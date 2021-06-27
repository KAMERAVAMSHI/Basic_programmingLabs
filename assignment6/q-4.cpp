//WAP to replace a string by another string. Example: In the sentence “All is well.”, replace “well” with “WELL”.

#include<stdio.h>
#include<string.h>

void new_string(char [],char[],char[]);                        //function declaration

int main()
{
char string[10],replace[10],new_str[10];
printf("\nEnter a string: ");
gets(string);
printf("\nEnter the word that you want to replace: ");
gets(replace);
printf("\nEnter the new word: ");
gets(new_str);
new_string(string,replace,new_str);                                 //function call  
printf("\nThe string after replacing that word: %s\n",string);
}

void new_string(char string[],char replace[],char new_str[])        //function 
{
int stringLen,subLen,newLen;
int i=0,j,k;
int flag=0,start,end;
stringLen=strlen(string);
subLen=strlen(replace);
newLen=strlen(new_str);

for(i=0;i<stringLen;i++)
{
flag=0;
start=i;
for(j=0;string[i]==replace[j];j++,i++)
if(j==subLen-1)
flag=1;
end=i;
if(flag==0)
i-=j;
else
{
for(j=start;j<end;j++)
{
for(k=start;k<stringLen;k++)
string[k]=string[k+1];
stringLen--;
i--;
}

for(j=start;j<start+newLen;j++)
{
for(k=stringLen;k>=j;k--)
string[k+1]=string[k];
string[j]=new_str[j-start];
stringLen++;
i++;
}
}
}
}



