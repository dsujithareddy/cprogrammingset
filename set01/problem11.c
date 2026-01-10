#include <stdio.h>
struct _complex
{
float real;
float imaginary;
};
typedef struct _complex Complex;
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main()
{
Complex num1, num2, sum;
printf("Enter the first complex number (real imaginary): ");
num1 = input_complex();
printf("Enter the second complex number (real imaginary): ");
num2 = input_complex();
sum = add_complex(num1, num2);
output(num1, num2, sum);
return 0;
}
Complex input_complex() {
Complex n;
scanf("%f %f", &n.real, &n.imaginary);
return n;
}
Complex add_complex(Complex a, Complex b) {
Complex sum;
sum.real = a.real + b.real;
sum.imaginary = a.imaginary + b.imaginary;
return sum;
}
void output(Complex a, Complex b, Complex sum) {
printf("The sum of %g+%gi and %g+%gi is %g+%gi\n",
a.real, a.imaginary,
b.real, b.imaginary,
sum.real, sum.imaginary);
}
