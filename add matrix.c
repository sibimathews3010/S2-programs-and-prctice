#include<stdio.h>
int main()
{int m,n,x[10][10],y[10][10],s[10][10],i,j;
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


    for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
        {//printf("enter the element:");
         scanf("%d",&y[i][j]);
        }
       }

       {
        //printf("added matrix\n");
        for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
        {s[i][j]=x[i][j]+y[i][j];


         printf("%d ",s[i][j]);
         }

       printf("\n");
       }

}


}
