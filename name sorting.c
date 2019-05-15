#include<stdio.h>
#include<string.h>
int main(){
   int i,j,count;
   char str[25][25],temp[25];
   //printf("How many strings u are going to enter?: ");
   scanf("%d",&count);

  // printf("Enter Strings : ");
   for(i=0;i<=count;i++)
      scanf("%s",str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Sorted:\n");
   for(i=0;i<=count-1;i++)
      printf("%s\n",str[i]);

   return 0;
}
