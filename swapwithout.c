#include<stdio.h>
int main()
{
    int a,b;
    //printf("enter num1:");
    scanf("%d",&a);
    //printf("enter the num2:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
printf("After Swapping\n");
    printf("Num1=%d\n",a);
    printf("Num2=%d",b);

}
