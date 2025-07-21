#include <stdio.h>

int main() {
    int a,b,temp;
    printf("Enter the first number-");
    scanf("%d",&a);
    printf("Enter the first number-");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping values are %d and %d",a,b);

    return 0;
}































 