#include<stdio.h>
void main()
{
float s1,s2,s3,s4,s5,total,percentage;
printf("Enter the s1 marks= ");
scanf("%f",&s1);
printf("Enter the s2 marks= ");
scanf("%f",&s2);
printf("Enter the s3 marks= ");
scanf("%f",&s3);
printf("Enter the s4 marks= ");
scanf("%f",&s4);
printf("Enter the s5 marks= ");
scanf("%f",&s5);
total=s1+s2+s3+s4+s5;
printf("The total =%f",total);
percentage=(total*100)/500;
printf("the percentage=%f",percentage);
}
