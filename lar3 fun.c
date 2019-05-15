#include<stdio.h>
int large(int a,int b,int c)
{
    if(a>b)

        if(a>c)

             printf("%d is the largest\n",a);


        else

            printf("%d is the largest\n",c);

     else

         if(b>c)
            printf("%d is the largest\n",b);


         else

            printf("%d is the largest\n",c);

}
int main()
{
  int a,b,c;
    //printf("enter num1:");
    scanf("%d",&a);
    //printf("enter the num2:");
    scanf("%d",&b);
    //printf("enter the num3:");
    scanf("%d",&c);
    large(a,b,c);
}

