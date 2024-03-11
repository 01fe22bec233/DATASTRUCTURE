#include<stdio.h>
void division(int n)
{
   int i=2;
   printf("1");
   while(i<=n/2)
   {
     if(n%i==0)
    printf("\t%d",i);
   i++;
}
   printf("\t%d",n);
return ;
}
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  division(n);
  return 0;
  }
