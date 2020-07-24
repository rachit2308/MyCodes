#include<stdio.h>
void main ()
{
float bp,ha,da,grosspay,newvariable;
printf("enter the basic pay: ");
scanf("%f",&bp);

da=0.4*bp;
ha=0.2*bp;
grosspay=da+ha+bp;

printf("basic pay = %f\n",bp);
printf("dearness allowance = %f\n",da);
printf("housing  allowance = %f\n",ha);
printf("grosspay = %f\n",grosspay);
}
