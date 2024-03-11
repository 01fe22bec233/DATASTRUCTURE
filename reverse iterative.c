#include<stdio.h>
int main()
{
  int n,r;
  printf("enter the number");
  scanf("%d",&n);
  r=reverse(n);
  return 0;
  }
int reverse(int n)
  {
    int dreverse=0,rem;
    while (n!=0)
    {
       rem=n%10;
       dreverse=dreverse*10+rem;
       n=n/10;
       }
    printf("reverse number=%d",dreverse);
    return dreverse;
    }
