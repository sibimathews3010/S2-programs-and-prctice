#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,length,flag=0;
 char str[20];
 scanf("%s",str);
 length=strlen(str);
 for(i=0,j=length-1;i<length;i++,j--)
 {
     if(str[i]!=str[j])
     {
         flag=-1;
         break;
     }
 }
 if(flag==0)
 {
     printf("PALINDROME");
 }
 else
 {
     printf("NOT PALINDROME");
 }
}
