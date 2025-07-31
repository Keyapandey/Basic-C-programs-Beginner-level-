#include <stdio.h>
int factorial(int x)
{
    int i,fact=1;{
    for(i=1;i<=x;i++)
    fact=fact*i;
        }
    return fact;
       
}
int main() {
    int a,b;
    printf("Enter n-");
    scanf("%d",&a);
    printf("Enter r-");
    scanf("%d",&b);
    int ncr=factorial(a)/(factorial(b)*factorial(a-b));
    printf("The ncr value of %d and %d is %d",a,b,ncr);
    
    return 0;
}