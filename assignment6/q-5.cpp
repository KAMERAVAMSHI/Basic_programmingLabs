#include<stdio.h>

int main()
{
   char name[20];
   int i=0;
   printf("Enter a string: ");
   gets(name);
   printf("%c",*name);
   while(name[i]!='\0')
   {
       if(name[i]==' ')
	   {
            i++;
            printf("%c",*(name+i));
       }
       i++;
   }
   return 0;
}

