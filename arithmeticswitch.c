#include<stdio.h>
int main()
{
    char c;
    int a,b,A;
    float M;
   // printf("Enter Operator (+ - * /): ");
    scanf("%c",&c);
    //printf("Enter  number1: ");
    scanf("%d",&a);
    //("Enter number2: ");
    scanf("%d", &b);
    switch(c)
    {   case '1':
            A= a + b;
           printf("Result=%d",A);
           break;
        case '2':
           A = a - b;
           printf("Result=%d",A);
           break;
        case '3':
           A = a * b;
           printf("Result=%d",A);
           break;
        case '4':

          M= (float)a / b;
           printf("Result=%f",M);
           break;
        case '5':

           A = a%b;
           printf("Result=%d",A);
           break;
        default:
            printf("Invalid Operator");
    }
}
