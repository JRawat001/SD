/* Preprocessor Code: Area of circle */

#include<stdio.h>
#define PI 3.14

void main()
{
	float radius, perimeter, area, PI = 3.14;
	
	printf("Enter the radius of circle = ");
	scanf("%f",radius);
	perimeter = 2*PI*radius;
	area = PI*radius*radius;
	printf("Radius of circle = %0.2f \n Perimeter of circle = %0.2f \nArea of circle = %0.2f");
}


