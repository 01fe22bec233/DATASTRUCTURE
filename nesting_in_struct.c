#include<stdio.h>;
struct address
{
   char phone[15];
   char city[25];
   int pin;
};
struct emp
{
   char name[25];
   struct address a;
};
int main()
{

struct emp e={"jerru","53123","athani",19};
  printf("\nname=%s phone=%s",e.name,e.a.phone);
  printf("\ncity=%spin=%d",e.a.city,e.a.pin);
}
