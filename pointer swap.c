#include<stdio.h>
int swap(int a,int b)
{int temp;
printf("Without using Pointers\n");
temp=a;
a=b;
b=temp;
printf("A=%d\nB=%d\n",a,b);
}
int swap_ref(int *a,int *b)
{int temp;
printf("Using Pointers\n");

temp=*a;
*a=*b;
*b=temp;
printf("A=%d\nB=%d\n",*a,*b);
}
int main()
{
    int a,b;
    //printf("enter the no1:");
    scanf("%d",&a);
    //printf("enter the no2:");
    scanf("%d",&b);


    swap(a,b);
    swap_ref(&a,&b);
}



