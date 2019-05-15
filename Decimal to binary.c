#include<stdio.h>
int main()
{


    int ch, base, num, rem, n=0,i;
    char h[50];
    base = 1;
            //printf("Enter decimal: ");
            scanf("%d",&num);
            while(num!=0)
            {
                rem = num % 2;
                n = n + rem*base;
                base*=10;
                num/=2;
            }
            printf("%d",n);
}
