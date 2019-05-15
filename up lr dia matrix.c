#include<stdio.h>
void main()
{
   int a[10][10],u[10][10],l[10][10],d[10][10],r,c,i,j;

   scanf("%d%d",&r,&c);

   if(r==c)
   {
       for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }


   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(i<=j)
           {
            u[i][j]=a[i][j];
           }
           else
           {
               u[i][j]=0;
           }
       }
   }
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(i>=j)
           {
               l[i][j]=a[i][j];
           }
           else
           {
               l[i][j]=0;
           }
       }
   }
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(i==j)
           {
               d[i][j]=a[i][j];
           }
           else
           {
               d[i][j]=0;
           }
       }
   }

   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",u[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",l[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",d[i][j]);
       }
       printf("\n");
   }
   }
   else
   {
       printf("invalid entry");
   }
}
