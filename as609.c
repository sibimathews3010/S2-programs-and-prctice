#include<stdio.h>
int main()
{
    int i,a[7]={5,6,8,2,9,3,},result;
    result=a[0];
    for(i=1;i<7;i++)
    {
        if(result>a[i])
        continue;
        result=a[i];

    }
    printf("%d",result);
    return 0;
}
