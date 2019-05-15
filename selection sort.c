#include<stdio.h>
int main()
{int n,x[100],temp,i,j;
    //printf("enter the no of elements of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
        //printf("enter the element:");
        scanf("%d",&x[i]);
       }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {   temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;

            }
        }
    }
    //printf("sorted array\n");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);

}
