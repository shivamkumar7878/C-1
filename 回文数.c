#include<stdio.h>
int main()
{
  int a[5];
  int b,i;
  do{
  printf("������һ����λ����");
  scanf("%d",&b);
 if(b<10000||b>99999)
  printf("�ⲻ��һ����λ������\n"); 
  }while(b<10000||b>99999);
for(i=0;i<=5;i++)
  {
      a[i]=b%10;
      b/=10;
  }
if(a[0]==a[4]&&a[1]==a[3])
    printf("����һ��������\n");
else
    printf("�ⲻ��һ��������\n")
return 0;
}