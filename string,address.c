#include<stdio.h>

int main() {
  char str[20],  *pt;

  //printf("Enter Any string  : ");
  scanf("%s",str);
  pt = str;

  while (*pt != '\0') {
    printf("%c %u\n",*pt,pt);
    pt++;
  }
  return 0;
}
