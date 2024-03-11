#include<stdio.h>
main()
{
    int n10,n5,n2,n1,total;
    printf("Enter the number of coins of 10 5 2 and 1 \n");
    scanf("%d%d%d%d",&n10,&n5,&n2,&n1);
    total=(10*n10)+(5*n5)+(2*n2)+(1*n1);
    printf("TOTAL AMOUNT=%d",total);
}
