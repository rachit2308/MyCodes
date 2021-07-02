#include <stdio.h>
int main()
{
    int sum = 0;
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=1; i<=n-1; i++){
        if(n%i == 0)
            sum = sum + i;
    }
        if(sum == n)
            printf("%d is perfect",n);

        else
            printf("%d is not perfect",n);


}


