#include<stdio.h>
int Bad(unsigned int N)
{
  if(N==0)
    return 0;
  else
    return Bad(N/3+1)+N-1;
}
int main()
{
  int a,b;
  scanf("%d",&b);
  a=Bad(b);
  printf("%d",a);
  return 0;
}