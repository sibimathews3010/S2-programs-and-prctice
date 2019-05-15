#include<stdio.h>
int main() {
    int ch, base, num, rem, n=0,i;
     base = 1;
            //printf("Enter binary: ");
            scanf("%d",&num);
            while(num!=0)
            {
                rem = num % 10;
                n = n + rem*base;
                base*=2;
                num/=10;
            }
            printf("%d",n);
            }
