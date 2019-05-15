#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;float root1,root2,r1,r2,i1,i2;
//printf("enter the a");
scanf("%d",&a);
//printf("enter the b");
scanf("%d",&b);
//printf("enter the c");
scanf("%d",&c);
d=(b*b-(4*a*c));
if(d>0)
{
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
   // printf("%3f root1= %3f root2=",root1,root2);
}
else if (d==0)
{
    root1=(-b)/2*a;
    root2=(-b)/2*a;


}

if(root1==root2)
{printf("Roots are real and equal\n");
printf("Root1 = %3f\n",root1);}
else if(d<0)
{
    printf("Roots are imaginary");
}
else
{printf("Roots are real and distinct\n");
printf("Root1 = %3f\nRoot2 = %3f",root1,root2);}
}

