#include<stdio.h>
int fact(int n)
{
   if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int m,p;
    //printf("Enter number: ");
    scanf("%d",&m);
    p=fact(m);
    printf("Factorial = %d",p);
    return 0;

}
