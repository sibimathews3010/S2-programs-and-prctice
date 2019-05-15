#include<stdio.h>
struct employ{
char name[20],dpt[20];
int idno,sal;
}s;
int main()
{
    int n,i,inc,sallary;
printf("enter the no of employ:");
scanf("%d",&n);
printf("enter the details\n");
for(i=0;i<n;i++)

  {
  printf("enter the employ id:");
   scanf("%d",&s.idno);
printf("enter the name of employ :");
scanf("%s",s.name);
printf("enter employ department:");
scanf("%s",s.dpt);
printf("enter employ salary:");
scanf("%d",&s.sal);


    printf("NAME=%s\n",s.name);
    printf("ID NO=%d\n",s.idno);
    printf("DEPARTMENT=%s\n",s.dpt);
    printf("MONTHLY SALARY=%d\n",s.sal);



  }



}
