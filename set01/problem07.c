#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    int n = input_n();          
    int sum = sum_n_nos(n);     
    output(n, sum);           
    return 0;
}

int input_n()
{
    int n, x, sum_input = 0;
    printf("Enter number of values: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);       
        sum_input += x;      
    }
 return n; 
}
int sum_n_nos(int n)
{
    return n * (n + 1) / 2;
}

void output(int n, int sum)
{
    printf("The sum of  ");
    for(int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if(i < n) printf("+");
    }
    printf(" is %d.\n", sum);
}
