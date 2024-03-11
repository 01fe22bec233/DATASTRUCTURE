#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 5
struct stack
{
  char data[SIZE];
  int top;
};
int isfull(struct stack *s)
{

    if(s->top==SIZE-1)
        return 1;
    return 0;
}
void push(struct stack *s,char element)
{
  if(isfull(s))
    printf("Stack full");
  else
  {
    s->top++;
    s->data[s->top]=element;
    }
    return ;
}
int isempty (struct stack *s)
{
  if(s->top==-1)
   return 1;
return 0;
}
int pop(struct stack *s)
{
char x;
if(isempty(s))
  printf("stack empty\n");

{x=s->data[s->top];
s->top--;
return x;
}
}
void display(struct stack s)
{
int i;
for(i=s.top;i>=0;i--)

printf("%c\n",s.data[i]);
return ;
}
int main()
{
char x;
struct stack s;
s.top=-1;
push(&s,'a');
push(&s,'b');
display(s);
printf("\npopped element is\n");
x=pop(&s);
printf("%c",x);
display(s);
}

