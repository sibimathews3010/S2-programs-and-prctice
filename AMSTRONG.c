#include<stdio.h>
#include<math.h>
int main()
{
int i,sum=0,n,rem,p,c=0,k;
//printf("enter the number:");
scanf("%d",&n);
p=n;
k=n;
while(n>0)
{
n=n/10;
c=c+1;
}
while(k>0)
{
rem=k%10;
sum=sum+powl(rem,c);
k=k/10;
}
if(sum==p)
{printf("%d is a Armstrong number",p);
}
else
{printf("%d is not a Armstrong number",p);
}

}


