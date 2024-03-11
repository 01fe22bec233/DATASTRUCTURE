

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
  char name[200];
  int roll;
  char div[100];
  float cgpa;
}STUDENT;
void read(STUDENT  s[100],int n)
{

   int i;
   printf("name:\t roll:\tdiv:\tcgpa:\n");
   for(i=0;i<n;i++)
   {
     scanf("%s%d%s%f",s[i].name,&s[i].roll,s[i].div,&s[i].cgpa);

   }
}
void display(STUDENT s[100],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
     printf("%s\t%d\t%s\t%f\n",s[i].name,s[i].roll,s[i].div,s[i].cgpa);
   }
}
void search_roll(STUDENT s[100],int n)
{
    int i,flag=0;
    int key;
    printf("enter the key");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(s[i].roll==key)

        {
            flag=1;
            printf("%s\t%d\t%s\t%f\n",s[i].name,s[i].roll,s[i].div,s[i].cgpa);
        }
    }
    if(flag==0)
    {
        printf("not found");
    }
}
void search_name(STUDENT s[100],int n)
{
   int i;
    char sname[10];
    printf("enter the sname");
    scanf("%s",sname);
    for(i=0;i<n;i++)
    {
        if(strcmp(s[i].name,sname)==0)
        {
            printf("%s\t%d\t%s\t%f\n",s[i].name,s[i].roll,s[i].div,s[i].cgpa);
        }
    }
    printf("not found");

}

int main()
{
  int n;
  STUDENT s[100];
  printf("enter the number of students");
  scanf("%d",&n);
  read(s,n);
  display(s,n);
  search_roll(s,n);
  search_name(s,n);
  return 0;
}
