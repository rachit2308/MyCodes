// 231    2

#include <stdio.h>
int main()
{
    int n;
    int rem;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(n>0){
        rem = n % 10;            // 1         3
        n   = n / 10;            // 23        2
        if(n==0){
            printf("%d",rem);
        }
    }
}

