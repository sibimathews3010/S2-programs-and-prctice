#include<stdio.h>
int main()
{int n,x[100],temp,i,j,position,k;
    //printf("enter the no of elements of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
       // printf("enter the element:");
        scanf("%d",&x[i]);}

    for(i=0;i<n-1;i++)
    {
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(x[position]>x[j])
        {
            position=j;
        }
    }
        if(position!=i)
        {
            temp=x[i];
            x[i]=x[position];
            x[position]=temp;

        }

    }
        //printf("sorted array\n");
     for(k=0;k<n;k++)
        printf("%d ",x[k]);
    }


