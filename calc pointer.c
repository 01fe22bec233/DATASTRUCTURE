#include<stdio.h>
void calc(int a,int b,int *add,int *sub,int *m,int *d,int *r)
{
  *add=a+b;
  *sub=a-b;
  *m=a*b;
  *d=a/b;
  *r=a%b;
  return;
  }
int main()
{
 int a,b;
 int add,sub,m,d,r;
 printf("enter the a and b value");
 scanf("%d%d",&a,&b);
 calc(a,b,&add,&sub,&m,&d,&r);
 printf("Sum=%d\n",add);
 printf("Sub=%d\n",sub);
 printf("Product=%d\n",m);
 printf("%d\n",d);
 printf("%d\n",r);
 return 0;
 }
