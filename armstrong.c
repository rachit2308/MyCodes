
//Random comment by Navin
#include <stdio.h>
int main()
{
    int a,n,b,i;
    int count=0;
    int prod=1;
    int digit=0;
    int sum =0;

    printf("Enter a number : ");
    scanf("%d",&n);

    b=a=n;
    while(n>0){
         n=n/10;
         count++;
    }
      sum=0;
    while(a>0){
         digit=a%10;
         a=a/10;
         prod =1;
         for(i=1;i<=count;i++)
         prod = prod *digit;
         sum = sum + prod;
    }

    if(sum==b)
      {
      printf("%d",b);
    }
    else
    {
       printf("it is not");
    }



}





