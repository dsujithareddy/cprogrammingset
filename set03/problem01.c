#include <stdio.h>
#include <math.h> 
void input(float *x1, float *y1, float *x2, float *y2)
{
printf("Enter the coordinates of the first point (x1 y1) and the second point (x2 y2): ");
scanf("%f %f %f %f",x1,y1,x2,y2);
}
float find_distance(float x1,float y1, float x2, float y2)
{
float dx = x2-x1;
float dy = y2-y1;
float distance =sqrt(dx*dx+dy*dy);
return distance;
}
void output(float x1, float y1, float x2, float y2, float distance) 
{
printf("The distance between point (%f,%f) and (%f,%f) is %f\n", x1,y1,x2,y2,distance);
}
int main() 
{
float x1, y1,x2,y2,distance;
input(&x1,&y1,&x2,&y2);
distance = find_distance(x1,y1,x2,y2);
output(x1,y1,x2,y2,distance);
return 0;
}
