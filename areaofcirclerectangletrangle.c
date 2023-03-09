#include<stdio.h>

int main()
{

	float r,l,w,b,h,circle,rect,tri;
printf("\n find the area of circle: ");
scanf("%f ", &r);
printf("\n find the area of rectangle: ");
scanf("%f %f",&l,&w);
printf("\n find the area of traingle: ");
scanf("%f %f ",&b,&h);
circle=3.14*r*r;
rect=l*w;
tri=0.5*b*h;
printf("\n circle %f \n rect %f \n tri %f",circle,rect,tri);
return 0;

}




/*{
	int r,l,w,b,h,circle,rect,tri;
	printf("\n find the value of circle:");
	scanf("%i",&r);
	circle=3.14*r*r;
	printf("\n find the value of rectangle:");
	scanf("%i %i",&w,&l);
	rect=w*l;
	printf("\n find the value of traingle:");
	scanf("%i %i",&b,&h);
	tri=0.5*b*h;
	printf(" circle %i \n rect %i \n tri %i",circle,rect,tri);
	return 0;
	
	
}*/
