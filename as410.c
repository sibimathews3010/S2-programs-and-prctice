#include<stdio.h>
void main()
{
int a=10,b=7,c=125;
c/=++a*--b;
printf("%d %d %d",a,b,c);
}
