#include<stdio.h>
int main()
{int m,n,x[10][10],y[10][10],i,j;
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
       /*printf("orginal matrix\n");
for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
       {
           printf("%d ",x[i][j]);
       }
    printf("\n");
       }
       */
    for(i=0;i<n;i++)
       {
       for(j=0;j<m;j++)
        y[i][j]=x[j][i];
        }


//printf("transposed matrix\n");
for(i=0;i<n;i++)
       {
       for(j=0;j<m;j++)
       {
           printf("%d ",y[i][j]);
       }
    printf("\n");
       }
}
