#include<stdio.h>
int main()
{
int n,sum=0,i=0;
//printf("enter the limit");
scanf("%d",&n);
do
{
    i++;
if(i%2==0)
{
    sum=sum+i*i;
}
}
while(i<2*n);
printf("Sum of Squares=%d",sum);
}
