// surface area of cylinder is A= 2*pi*r*h+2*pi*r*r

#include<stdio.h>
#define pi  3.14  //you can also write in float
int main() 
{
	float radius,hight,area;  
	// float pi = 3.14;

	printf("Enter value of radius \n");
	scanf("%f", &radius);

	printf("Enter value of hight \n");
	scanf("%f", &hight);
    
    /* OR you can write -
    printf("Surface area of a cylinder is %f",2*pi*radius*hight+2*pi*radius*radius);
	*/
	
	area = (2 * pi * radius * hight) + (2 * pi *radius *radius);

	printf("Surface area of Cylinder is %f\n", area);
    
	return 0;
}