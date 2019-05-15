#include<stdio.h>
int main()
{int m,n,p,q,x[10][10],y[10][10],M[10][10],i,j,k,sum=0;
    //printf("enter the no of rows");
    scanf("%d",&m);
    //printf("enter the no of coloums");
    scanf("%d",&n);
    for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
        {//printf("enter the element:");
         scanf("%d",&x[i][j]);
        }
       }
       //printf("enter the no of rows");
    scanf("%d",&p);
   // printf("enter the no of coloums");
    scanf("%d",&q);
    for(i=0;i<p;i++)
       {
       for(j=0;j<q;j++)
        {//printf("enter the element:");
         scanf("%d",&y[i][j]);
        }
       }


 {
     for(i=0;i<m;i++)
       {
       for(j=0;j<q;j++)
       {
        for(k=0;k<p;k++)
        {
            sum+=x[i][k]*y[k][j];

        }
        M[i][j]=sum;
        sum=0;
       }
 }
 for(i=0;i<m;i++)
 {
     for(j=0;j<q;j++)
     {
         printf("%d ",M[i][j]);
     }
     printf("\n");
 }
}
}
