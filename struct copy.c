#include<stdio.h>
#include<string.h>
int main()
{
  struct employee
  {
     char name[10];
     int age;
     float salary;
    };
struct employee e1={"sanjay",30,5500.50};
struct employee e2,e3;
e2=e1;
e3=e2;
printf("%s\t%d\t%f\n",e1.name,e1.age,e1.salary);
printf("%s\t%d\t%f\n",e2.name,e2.age,e2.salary);
printf("%s\t%d\t%f\n",e3.name,e3.age,e3.salary);
return 0;
 }
