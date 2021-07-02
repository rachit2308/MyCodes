// 12131

#include <stdio.h>
int main()
{
    int n;
    int count=0;
    int rem=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(n>0){
        rem=n%10;    // 1       3

        if(rem == 1)
            count++;
            n=n/10;      //1213    121
    }

        printf("%d",count);


}

