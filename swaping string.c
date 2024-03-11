#include<stdio.h>
#include<string.h>
void swap_strings(char string1[],char string2[]);
int main()
{
   int i;
   char text1[20];
   char text2[20];
   printf("enter two names\n");
   gets(text1); gets(text2);
   printf("before swapping\n");
   printf("text1=%slenght=%d\n",text1,strlen(text1));
   printf("text2=%slength=%d\n",text2,strlen(text2));
   swap_strings(text1,text2);
   printf("after swapping\n");
   printf("text1=%slenght=%d\n",text1,strlen(text1));
   printf("text2=%slenght=%d\n",text2,strlen(text2));
   }
void swap_strings(char string1[],char string2[])
{
   char temp[20];
   strcpy(temp,string1);
   strcpy(string1,string2);
   strcpy(string2,temp);
   }
