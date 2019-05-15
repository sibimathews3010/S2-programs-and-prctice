#include<stdio.h>

int fib(int a)
{
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
        return fib(a-1)+fib(a-2);
}
int main()
{
    int k,i;
    //printf("Enter number: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        int j=fib(i);
        printf("%d ",j);
    }
    return 0;
}
