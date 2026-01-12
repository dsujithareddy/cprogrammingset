#include <stdio.h>
#include <math.h> 
int input_number();
int is_prime(int n);
void output(int n, int result);
int main()
{
int num, result;
printf("Enter the number : ");
num = input_number();
result = is_prime(num);
output(num, result);
return 0;
}
int input_number()
{
int n;
scanf("%d", &n);
return n;
}
int is_prime(int n)
{
if (n <= 1)
{
return 0; 
}
for (int i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
{
return 0; 
}
}
return 1;
}
void output(int n, int result) 
{
if (result == 1) {
printf("%d is a prime number\n", n);
} 
else 
{
printf("%d is not a prime number\n", n);
}
}
