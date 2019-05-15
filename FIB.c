#include<stdio.h>
int main()
{
int n,i=0,n1=0,n2=1,nxt;
//printf("enter the limit\n");
scanf("%d",&n);
printf("%d ",n1);
for(i=0;i<n-1;i++)
   {
    nxt=n1+n2;
    n1=n2;
    n2=nxt;
    printf("%d ",n1);
   }
}



