#include<stdio.h>
int fibb_series(int n)
{
  int curr_term;
  int f_p_term=0,s_p_term=1;
  int cnt=3;
  printf("%3d%3d",f_p_term,s_p_term);
  while(cnt<=n)
  {
    curr_term=f_p_term+s_p_term;
    printf("%3d",curr_term);
    f_p_term =s_p_term;
    s_p_term=curr_term;
    cnt++;
    }
    return curr_term;
    }
int main()
{
  int n;
  int t;
  printf("enter the value n\n");
  scanf("%d",&n);
  t=fibb_series(n);
  return 0;
  }
