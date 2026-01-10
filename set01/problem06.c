#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
    int n1,n2,n3,largest1;
    input(&n1,&n2,&n3);
    compare(n1,n2,n3,&largest1);
    output(n1,n2,n3,largest1);
    return 0;
}
int input(int *a, int *b, int *c)
{
    *a=1;
    *b=1;
    *c=0;
   /* int num;
    printf("input\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);*/
    return 1;
}
void compare(int a, int b, int c, int *largest)
{
   if(a>=b && a>=c)
   {
       *largest=a;
   }
   else if(b>=a &&b>=c){
       *largest=b;
       }
       else{
       *largest=c;
      }
}
void output(int a, int b, int c, int largest)
{
    printf("output \n");
    printf(" input:%d %d %d\n",a,b,c);
    printf("largest number :%d\n",largest);
}
