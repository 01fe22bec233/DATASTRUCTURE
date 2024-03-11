/*program to compute the minimum of two numbers*/
#include<stdio.h>
int main()
{
   int first_number,second_number;
   printf("enter the first number\n");
   scanf("%d",&first_number);
   printf("enter the second_number\n");
   scanf("%d",&second_number);
   if(first_number<second_number)
   {
     printf("minimum==first_number");
   }
   else
   {
     printf("minimum==second_number");
   }
   return 0;
}
