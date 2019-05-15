#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,sum=0;
    //printf("Enter r1\n");
    scanf("%d",&r1);
    //printf("Enter c1\n");
    scanf("%d",&c1);
    int (*a)[c1]=malloc(r1*sizeof(int));
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",(*(a+i)+j));
    }
     //printf("Enter r2\n");
    scanf("%d",&r2);
    //printf("Enter c2\n");
    scanf("%d",&c2);
    int (*b)[c2]=malloc(r2*sizeof(int));
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            scanf("%d",(*(b+i)+j));
    }
    int (*c)[c2]=malloc(r1*sizeof(int));
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
               sum+=*(*(a+i)+k)**(*(b+k)+j);
            *(*(c+i)+j)=sum;
            sum=0;
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d ",*(*(c+i)+j));
        printf("\n");
    }
    return 0;

}
