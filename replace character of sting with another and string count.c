#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    char ch,c,s[12];
    //printf("Enter String: ");
    scanf("%[^\n]",s);
    //printf("\nEnter Character you want to replace: ");
    scanf(" %c",&c);
    //printf("\nEnter Relacing Character: ");
    scanf(" %c",&ch);
    n=strlen(s);
    for(i=0;i<n-1;i++)
    {   if(s[i]==c)
        {
            count++;
            s[i]=ch;

        }
    }
    printf("%s",s);
    printf("\ncount = %d",count);
    return 0;
}
