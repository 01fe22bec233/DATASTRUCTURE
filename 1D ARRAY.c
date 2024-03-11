#include<stdio.h>

void read(float a[7])
{
   int i;
   for(i=0;i<7;i++)
   scanf("%f",&a[i]);
   return;
   }
void display(float a[7])
{
   int i;
   for (i=0;i<7;i++)
   printf("%2f\n",a[i]);
   return;
}
void sum(float a[7],float b[7],float c[7])
{
     int i;
   for(i=0;i<7;i++)
   {
    c[i]=a[i]+b[i];
    }
    return;
    }
int main()
{
   float a[7],b[7],c[7];
   read(a);
   display(a);
   read(b);
   display(b);
   sum(a,b,c);
   display(c);
   return 0;
   }
