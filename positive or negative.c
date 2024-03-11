/*program to compute the number is positive or negative*/
#include<stdio.h>
int main()
{
   int number;
   printf("enter the number \n");
   scanf("%d",&number);
   if(number>0)
   {
      printf("the number is positive");
   }
   else
   {
      printf("the number is negative ");
   }
   return 0;
   }
