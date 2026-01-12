#include <stdio.h>
struct _complex {
float real;
float imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main() {
int n = get_n();
Complex complex_numbers[n]; 
input_n_complex(n, complex_numbers);
Complex sum = add_n_complex(n, complex_numbers);
output(n, complex_numbers, sum);
return 0;
}
int get_n() {
int n;
printf("Enter the number of arrays: ");
if (scanf("%d", &n) != 1 || n <= 0) {
printf("Invalid input. Defaulting to 1.\n");
return 1;
}
return n;
}
Complex input_complex() {
Complex c;
 if (scanf("%f %f", &c.real, &c.imaginary) != 2) {
printf("Invalid input for complex number. Defaulting to 0+0i.\n");
c.real = 0.0;
c.imaginary = 0.0;
}
return c;
}
void input_n_complex(int n, Complex c[n]) {
printf("Input (real imaginary pairs):\n");
for (int i = 0; i < n; i++) {
c[i] = input_complex();
}
}
Complex add(Complex a, Complex b) {
Complex sum;
sum.real = a.real + b.real;
sum.imaginary = a.imaginary + b.imaginary;
return sum;
}
Complex add_n_complex(int n, Complex c[n]) {
Complex sum;
sum.real = 0.0;
sum.imaginary = 0.0;
for (int i = 0; i < n; i++) {
sum = add(sum, c[i]);
}
return sum;
}
void output(int n, Complex c[n], Complex result) {
for (int i = 0; i < n; i++) {
printf("%.0f+%.0fi", c[i].real, c[i].imaginary);
if (i < n - 1) {
printf(" + ");
}
}
printf(" is %.0f+%.0fi\n", result.real, result.imaginary);
}
