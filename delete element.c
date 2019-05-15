#include<stdio.h>
int main()
{
    int ar[20],numr,limit,i;
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&ar[i]);
    }

    scanf("%d",&numr);
    for(i=numr-1;i<limit;i++)
    {

            ar[i] = ar[i+1];

    }

    for(i=0;i<limit-1;i++)
    {
        printf("%d ",ar[i]);
    }
}
