#include<stdio.h>
int main()
{
    float bs,da,hra,pf;int gs;
    //printf("enter the salary");
    scanf("%f",&bs);
    if(bs>=5000)
    {
        da=1.1*bs;
        hra=.2*bs;
        pf=.07*bs;
        gs=bs+da+hra-pf;
        printf("Gross=%d",gs);

     }
    else if(bs<5000&&bs>=3000)
    {
        da=1*bs;
        hra=.15*bs;
        pf=400;
        gs=bs+da+hra-pf;
        printf("Gross=%d",gs);

     }
    else
    {
        da=.9*bs;
        hra=.1*bs;
        pf=300;
        gs=bs+da+hra-pf;
        printf("Gross=%d",gs);

     }



}
