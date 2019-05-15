#include<stdio.h>
int main()
{
int x=5,y=6,z=7;
if(x-y)
    z=z++;
z=--z;
    printf("%d",z);
    return 0;
}
