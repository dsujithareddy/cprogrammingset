#include<stdio.h>

int input();
int add(int a,int b);
void output(int a,int b,int c);
int main()
{
  int n1,n2,sum1;
clrscr();
printf("enter two number : ");
n1=input();
n2=input();
sum1=add(n1,n2);
output(n1,n2,sum1);
return 0;
}
int input()
{
  int n;
scanf("%d",&n);
return n;
}
int add(int a,int b)
{
  return a+b;
}
void output(int a,int b,int sum)
{
  printf("the sum of %d and %d is %d \n",a,b,sum);
}
