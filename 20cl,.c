#include <stdio.h>
void main()
{
    char i, j,k;
    for(i='d';i>='a';i--)
    {
        for(j='a';j<=i;j++)
            printf("%c ",j);
        for(k=i;k>='a';k--)
            printf("%c ",k);
    printf("\n");
}}
