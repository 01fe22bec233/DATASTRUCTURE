#include<stdio.h>
void display(int n)
{
  int i=1;
  while(i<=n)
  {
    printf("%d\n",i);
    i++;
    }
    return;
    }
int main ()
{
  int n;
  printf("enter the n\n");
  scanf("%d",&n);
  display(n);
  return 0;
  }
