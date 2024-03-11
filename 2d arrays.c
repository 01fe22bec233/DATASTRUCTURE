#include<stdio.h>

void read(int a[5][5],int rows,int cols)
{
   int i,j;
   for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++)
      {
        scanf("%d",&a[i][j]);
        }
        }
        return;
        }
void display(int a[5][5],int rows,int cols)
{
    int i,j;
     for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++)
      {
        printf("%3d",a[i][j]);
        }
        printf("\n");
        }
        return;
        }
int main()
{
    int rows,cols;
   int a[5][5];
   scanf("%d%d",&rows,&cols);
   read(a,rows,cols);
   display(a,rows,cols);
   return 0;
   }
