#include<stdio.h>
int num(int n)
{
   int sum =0,rem;
   while(n!=0)
   {
      rem=n%10;
      sum =sum+rem;
      n=n/10;
      }
      return sum;
      }
int main()
{
  int n,s;
  printf("enter the number \n");
  scanf("%d",&n);
  s=num(n);
  printf("%d",s);
  return 0;
  }
