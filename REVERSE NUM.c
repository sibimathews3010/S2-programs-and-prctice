#include<stdio.h>
int main()
{
int i,sum=0,n,rem;
//printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
printf("Reverse=%d",sum);
}


