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
    for(i=0;i<limit;i++)
    {
        if(ar[i]==numr)
        {
            break;
        }


    }


        printf("%d ",i+1);

}
