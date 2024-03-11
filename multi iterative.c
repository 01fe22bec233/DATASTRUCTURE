#include<stdio.h>
void multi(int n)
{
  int i;
  for(i=1;i<=10;i++)
  {
    printf("%d*%d=%d\n",n,i,n*i);
    }
    return ;
    }
int main()
{
   int n;
   printf("enter the number");
   scanf("%d",&n);
   multi(n);
   return 0;
   }
