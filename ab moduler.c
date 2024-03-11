#include<stdio.h>
int summ(int a,int b)
{
    int d;
    d=b++ +a;
    printf("%d\n",b);
    return d;
}
int summ2(int a,int b)
{
    int c;
    c=++a-b;
    return c;
}
int main()
  {
      int a=15,b=10,c,d;
      d=summ(a,b);
      c=summ2(a,b);
      printf("a/b=%d\n",a/b);
      printf("a%%b=%d\n",a%d);
      printf("a*=b=%d\n",a*=b);
      printf("%d\n",(c>d) ? 1:0);
      printf("%d\n",(d>c)? 1:0);
      printf("d=%d\n",d);
      printf("c=%d\n",c);
      return 0;
  }
