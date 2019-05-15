#include<stdio.h>
int main()
{
int n,sum=0,i=0;float average;
//printf("enter the limit");
scanf("%d",&n);
while(i<=n)
   {
       sum=sum+i;


       i=i+1;}
printf("Sum=%d\n",sum);
average=(float)sum/n;
printf("Average=%f",average);
}
