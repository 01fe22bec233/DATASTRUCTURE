#include<stdio.h>
void read(float[],int);
void display(float[],int);
float max(float[],int);

main()
{
    int n,count;
    float m[100],res;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);
    res=max(m,n);
    printf("\n MAX NUMBER=%f",res);

}
void read(float m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&m[i]);
    }
}
void display(float m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%f\n",m[i]);
    }
}
float max(float m[100],int n)
{
    int i,j=1;
    float res=m[0];
    for(i=1;i<n;i++)
    {
        if(m[i]>res)
        {
        res=m[i];
        i++;
        }
    }
    return res;
}
