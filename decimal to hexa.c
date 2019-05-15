#include<stdio.h>
int main() {
    int ch, base, num, rem, n=0,i;
    char h[50];
//printf("Enter decimal: ");
            scanf("%d",&num);
            n=0;
            while(num!=0)
            {
                rem = num % 16;
                if (rem > 9)
                {
                    h[n] =  55 + rem;
                    n+=1;
                }
                else
                {
                    h[n] = 48 + rem;
                    n+=1;
                }
                num/=16;
            }
            for(i = n-1; i >= 0; i--)
                printf("%c",h[i]);
            }
