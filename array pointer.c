#include<stdio.h>
void read(int *p,int n)
{
  int i=0;
  for(;i<n;i++)
  {
  scanf("%d",p);
  p++;
  }
  }
void display(int *p,int n)
{
  int i=0;
  for(;i<n;i++)
  {
  printf("%d",*p);
  p++;

  }
  }
int main()
{
  int n;
  int a[10];
  int *p;
  printf("enter the n value");
  scanf("%d",&n);
  p=&a[10];
  read(p,n);
  display(p,n);
  return 0;
  }
