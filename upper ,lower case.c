#include<stdio.h>
#include<string.h>
int toslower(char ch)
{
    if(ch>=65 && ch<=91)
        return ch+32;
    else if(ch>=97 && ch<122)
        return ch-32;
    else
        return 0;
}
void main()
{   int l,i;
    char a[100];
    //printf("Enter word: ");
    scanf("%s",a);
    l=strlen(a);
    printf("Converted: ");
    for(i=0;i<l;i++)
        printf("%c",toslower(a[i]));

}
