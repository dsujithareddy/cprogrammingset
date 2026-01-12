#include <stdio.h>
typedef struct _triangl
{
float base, altitude, area;
} 
Triangle;
Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
printf("enter the values");
Triangle t;
t = input_triangle();
find_area(&t);
output(t);
return 0;
}
Triangle input_triangle() 
{
Triangle t;
scanf("%f", &t.base);
scanf("%f", &t.altitude);
return t;
}
void find_area(Triangle *t) 
{
t->area = 0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
printf("The area of triangle with base = %f and altitude = %f is %f\n", t.base, t.altitude, t.area);
}

