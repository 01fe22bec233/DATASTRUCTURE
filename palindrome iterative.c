#include<stdio.h>
int palindrome(int n)
{
  int dreverse=0,rem;
  while(n!=0)
  {
    rem=n%10;
    dreverse=dreverse*10+rem;
    n=n/10;
    }
    printf("reverse number=%d",dreverse);
    return dreverse;
   }
   int main()
   {
    int n,r;
    printf("enter the number");
    scanf("%d",&n);
    r=palindrome(n);
    if(r==n)
      printf("palindrome");
    else
      printf("not palindrome");
      return 0;
      }
