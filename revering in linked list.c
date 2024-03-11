#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 typedef struct num
 {
     int n;
     struct num *next;
 } NODE;

NODE *create_node()
{ NODE *temp;
  temp=(NODE *)malloc(sizeof(NODE));
 if(temp==NULL)
   return 0;
  temp->next=NULL;
  return temp;
}

NODE *read_details( NODE *t)
{
   scanf("%d ",&t->n);
   return t;
}

NODE*insert_front(NODE *head,NODE *t)
{
   if(head==NULL)
   head=t;
   else
   {
    t->next=head;
       head=t;
   }
    return head;
}

void display (NODE *head)
{ NODE *cur =head;
  while(cur!= NULL)
  {
    printf("%d ",cur->n);
      cur=cur->next;
  }

return ;
}

NODE *reverse(NODE *head)
{ NODE *cur=head;
  NODE *next=NULL;
 NODE *prev=NULL;
 while(cur!=NULL)
 { next=cur->next;
  cur->next=prev;
  prev=cur;
   cur=next;

 }
   head=prev;
    return head;

}
int main() {
 NODE *head=NULL;
 NODE *t=NULL;
    int i;
  int x;
  scanf("%d",&x);
  if(x>=1)
  {
  for(i=0;i<x;i++)
  {
   t=create_node();
   t=read_details(t);
   head=insert_front(head,t);
  }
    printf("List is:\n");
    display(head);
      head=reverse(head);
   printf("\n\nReversed list is:\n");
    display(head);

  }
    else
     printf("Invalid input");
    return 0;
}
