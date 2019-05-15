#include<stdio.h>
int main()
{
int i,sum=0,n,rem,p;
//printf("enter the number:");
scanf("%d",&n);
p=n;
while(n!=0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
if(sum==p)
{printf("Palindrome");
}
else
{printf("Not Palindrome");
}

}


