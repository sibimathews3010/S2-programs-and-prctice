#include<stdio.h>
int main()
{
    int a,b,T;
    //printf("enter num1:");
    scanf("%d",&a);
    //printf("enter the num2:");
    scanf("%d",&b);
    T=a;
    a=b;
    b=T;
    printf("After Swapping\n");
    printf("Num1=%d\n",a);
    printf("Num2=%d",b);

}

