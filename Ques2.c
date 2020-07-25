#include<stdio.h>
void main()
{
   float km,m,cm,feet,inch;

   printf("Enter the distance in km= ");
   scanf("%f",&km);

   m=km*1000;
   cm=m*100;
   inch=cm/2.54;
   feet=inch/12;

   printf("distance in m= %f\n",m);
   printf("distance in cm= %f\n",cm);
   printf("distance in inch= %f\n",inch);
   printf("distance in feet= %f\n",feet);


}
