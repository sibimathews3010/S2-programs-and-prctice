#include<stdio.h>
int main()
{

int n,i,j,k,p=0;
//printf("enter the limit:");
scanf("%d",&n);
for(i=n;i>0;i--)
{   for(j=65;j<65+i;j++)
        printf("%c",j);

    for(k=0;k<2*p;k++)
        printf(" ");
    for(j=65+i-1;j>=65;j--)
        {printf("%c",j);}
    p+=1;
    printf("\n");
    }
    return 0;
}


