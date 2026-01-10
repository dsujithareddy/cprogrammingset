#include<stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
    int n1,n2,sum1;
    input(&n1,&n2);
    add(n1,n2,&sum1);
    output(n1,n2,sum1);
    return 0;
}
void input(int *a, int *b)
{
    printf("input\n");
    *a=1;
    *b=2;
}
void add(int a, int b,int *sum)
{
    *sum=a+b;
    }
  void output(int a, int b, int sum)
  {
      printf("output\n");
      printf("the sum of %d and %d is %d \n",a,b,sum);
  }
