#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
printf("enter the number : ");
int n;
int fibo_num;
n = input();
fibo_num = find_fibo(n);
output(n, fibo_num);
return 0;
}
int input()
{
int n_val;
scanf("%d", &n_val);
return n_val;
}
int find_fibo(int n)
{
if (n < 0) 
{
return -1;
}
if (n == 0)
{
return 0;
}
if (n == 1) 
{
return 1;
}
int a = 0; 
int b = 1; 
int next_fibo;
for (int i = 2; i <= n; i++)
{
next_fibo = a + b;
a = b;         
b = next_fibo; 
}
return b;
}
void output(int n, int fibo) 
{
if (fibo == -1) 
{
printf("Invalid input for Fibonacci sequence calculation.\n");
}
else 
{
printf("fibo(%d) = %d\n", n, fibo);
}
}
