#include <stdio.h>
int input_side() {
int side;
 printf("Enter side: ");
scanf("%d", &side);
return side;
}
int check_scalene(int a, int b, int c) {
if (a != b && b != c && a != c) {
return 1;
}
else 
{
return 0;
}
}
void output(int a, int b, int c, int isscalene) {
printf("The triangle with sides %d, %d and %d is", a, b, c);
if (isscalene) {
printf(" scalene\n");
}
else
{
printf(" not scalene\n");
}
}
int main() {
int side1, side2, side3, scalene_status;
side1 = input_side();
side2 = input_side();
side3 = input_side();
scalene_status = check_scalene(side1, side2, side3);
output(side1, side2, side3, scalene_status);
return 0;
}
