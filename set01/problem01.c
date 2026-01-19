// 1.Write a C program to find the largest of three numbers using four functions.
#include <stdio.h>

int input();
int largest(int a, int b, int c);
void output(int result);
int main()
{
int a, b, c;
printf("enter the numbers");
a = input();
b = input();
c = input();
output(largest(a, b, c));
return 0;
}
int input()
{
int n;
scanf("%d", &n);
return n;
}
int largest(int a, int b, int c)
{
if (a >= b && a >= c) 
return a;
else if (b >= a && b >= c)
return b;
 else 
 return c;
}
void output(int result)
{
printf("Largest number is: %d\n", result);
}

