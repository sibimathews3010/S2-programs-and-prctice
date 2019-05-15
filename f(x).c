#include<stdio.h>
int main()
{
    int a,x;
    //printf("enter the value of X");
    scanf("%d",&a);
    if (0<a && a<=10)
    {
        x=(a*a)+2;
        printf("f(x)=%d",x);
    }

    else if (10<a && a<=20)

    {
        x=a*a+(2*a);
        printf("f(x)=%d",x);
    }

    else if(20<a && a<=30)
    {
        x=a*a*a+2*a*a;
        printf("f(x)=%d",x);
    }
    else
    {
        x=0;
        printf("f(x)=%d",x);
    }


}
