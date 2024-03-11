#include<stdio.h>
void pattern(int n)
{
    int i,j;
   //scanf("%d %d",&i, &j);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return ;
}
int main()

{
    int n;
    pattern(n);
    return 0;
}
