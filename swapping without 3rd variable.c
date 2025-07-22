#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the first number-");
    scanf("%d",&a);
    printf("Enter the first number-");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping values are %d and %d",a,b);

    return 0;
}
































 