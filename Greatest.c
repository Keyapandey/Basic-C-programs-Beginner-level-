#include <stdio.h>

int main() 
{
    int a,b;
    printf("\nEnter first number-");
    scanf("%d",&a);
    printf("\nEnter second number-");
    scanf("%d",&b);
    if(a>b)
        printf("\n%d is greatest number",a);
    else 
        printf("\n%d is greatest number",b);
   
    return 0;
}