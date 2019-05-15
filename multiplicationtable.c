#include<stdio.h>
int main()
{
int n,i,m,p;
//("enter the no:");
scanf("%d",&n);
//printf("enter the no:");
scanf("%d",&m);
//printf("the multipication table\n");
for(i=1;i<=m;i++)
   {

    p=n*i;
    printf("%dx%d=%d\n",n,i,p);
   }
}
