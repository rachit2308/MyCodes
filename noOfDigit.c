#include <stdio.h>
int main()
{
    int count = 0;
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0){
        n=n / 10;
        count++;


    }
    printf("%d ",count);

}

