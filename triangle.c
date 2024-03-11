/*program to compute the triangle*/
#include<stdio.h>
int main()
{
    float s1,s2,s3;
    printf("enter the \n s1,s2,s3\n");
    scanf("%f%f%f",&s1,&s2,&s3);
    if (s1==s2&&s2==s3&&s3==s1)
       printf("the triangle is equilateral");
    else if(s1==s2||s2==s3||s3==s1)
       printf("the triangle is isosceles triangle");
   else if(s1*s1==s2*s2+s3*s3)
       printf("the triangle is right angled");
    else
        printf("the triangle is scelene");
   return 0;
   }
