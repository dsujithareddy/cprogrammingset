#include <stdio.h>
#include <stdbool.h>
int input_array_size();
void init_array(int n, bool is_prime[n]);
void eratosthenes_sieve(int n, bool is_prime[n]);
void output(int n, bool is_prime[n]);
int main()
{
int n=input_array_size();
bool is_prime[n+1]; 
init_array(n+1,is_prime);
eratosthenes_sieve(n,is_prime);
output(n,is_prime);
return 0;
}
int input_array_size() {
    int n=35;
    printf("Enter the upper limit n: ");
  printf("%d\n",n);
    return n;
}
void init_array(int size,bool is_prime[size])
{
for (int i=0;i<size;i++)
{
is_prime[i]=true;
}
is_prime[0]=false;
is_prime[1] = false;
}
void eratosthenes_sieve(int n, bool is_prime[n + 1]) 
{
for (int p=2; p*p<= n;p++) 
{
if (is_prime[p] == true) 
{
for (int i = p * p; i <= n; i += p)
is_prime[i] = false;
}
}
}
void output(int n, bool is_prime[n + 1])
{
printf("Prime numbers between 2 and %d are: ", n);
bool first = true;
for (int p = 2; p <= n; p++)
{
if (is_prime[p])
{
if (!first) 
{
printf(", ");
}
printf("%d", p);
first = false;
}
}
printf("\n");
}
