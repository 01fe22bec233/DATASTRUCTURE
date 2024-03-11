/*program to compute aggregated marks and percentagemarks*/
#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,aggregatedmarks,percentagemarks;
    printf("enter the sub1,sub2,sub3,sub4,sub5 marks");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    aggregatedmarks=sub1+sub2+sub3+sub4+sub5;
    percentagemarks=aggregatedmarks*100/500;
    printf("the aggregated marks is=%f",aggregatedmarks);
    printf("the percentage marks is=%.3f",percentagemarks);
    return 0;


}
