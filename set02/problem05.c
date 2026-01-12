#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main() {
printf("enter two nubers");
int num1, num2, gcd_result;
num1 = input();
num2 = input();
gcd_result = find_gcd(num1, num2);
output(num1, num2, gcd_result);
return 0;
}
int input() 
{
int n;
if (scanf("%d", &n) != 1) 
{
printf("Error reading input. Using default 0.\n");
n = 0; 
}
 return n;
}
int find_gcd(int a, int b)
{
while (b != 0) {
int temp = b;
b = a % b; 
a = temp; 
}
return a;
}
void output(int a, int b, int gcd)
{
printf("%d\n", gcd);
}
