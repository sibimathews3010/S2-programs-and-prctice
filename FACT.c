





#include<stdio.h>
int main()
{
int i,fact=1,n;
//("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ fact=fact*i;
}
printf("Factorial = %d",fact);
}
