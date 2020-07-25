#include<stdio.h>
void main()
{
   int l,b,area1,peri;
   float r,area2,circum;
   printf("enter the length = ");
   scanf("%d",&l);
   printf("enter the breadth = ");
   scanf("%d",&b);

   area1=l*b;
   peri=2*l+2*b;

   printf("the area of the rectangle=%d \n",area1);
   printf("the perimeter of the rectangle=%d \n",peri);

   printf("enter the radius of the circle= ");
   scanf("%f",&r);

   area2=3.14*r*r;
   printf("the area of the circle %f \n",area2);
   circum=2*3.14*r;
   printf("the circumference of the circle%f \n",circum);


}
