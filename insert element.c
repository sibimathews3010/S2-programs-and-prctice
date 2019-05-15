#include<stdio.h>
int main()
{
    int ar[20],numr,pos,limit,i;
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&pos);
    scanf("%d",&numr);
    for (i = limit - 1; i >= pos - 1; i--)
    {ar[i+1] = ar[i];
    }

    ar[pos-1]=numr;

    for(i=0;i<limit+1;i++)
    {
        printf("%d ",ar[i]);
    }
}
