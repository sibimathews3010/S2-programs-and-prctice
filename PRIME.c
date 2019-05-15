#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
       if(n%i==0)
       f=f+1;
    }
    if(f==1)
    printf("%d is Prime",n);
    else
    printf("%d is not Prime",n);
return 0;
}
