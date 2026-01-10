#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
    int n1,n2,n3,largest1;
 printf("enter input:\n");
 n1=input();
  n2=input();
   n3=input();
   largest1=compare(n1,n2,n3);
   printf("output \n");
   output(n1,n2,n3,largest1);
   return 0;
}
int input()
{
    int num;
    printf("enter the integer");
    scanf("%d",&num);
    return num;
}
int compare(int a, int b, int c)
{
    int largest=a;
    if(b>largest)
    {
        largest=b;
    }
    if(c>largest){
        largest=c;
    }
    return largest;
}
void output(int a, int b, int c, int largest)
{
    printf("the largest of %d and %d is % d\n",a,b,c,largest);
}

