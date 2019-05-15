#include<stdio.h>
int main()
{
    char str[20],substr[10];
    int i=0,l=0,ll=0,k,j;
    //printf("Enter the string\n");
    scanf("%[^\n]",str);
    while(str[i]!='\0')
    {
        l++;
        i++;

    }
    //printf("Enter the substring\n");
    scanf("%s",substr);
    i=0;
    while(substr[i]!='\0')
    {
        ll++;
        i++;
    }

    for(i=0;i<l;i++)
    {
        if(substr[0]==str[i])
        {
            k=0;
            for(j=i;j<ll+i;j++)
            {
                if(str[j]!=substr[k])
                    break;
                k++;
            }
            if(k==ll)
            {
                printf("Found at location %d",i);
                break;
            }
        }
    }
    if(i==l)
       // printf("Not present\n");
return 0;
}
