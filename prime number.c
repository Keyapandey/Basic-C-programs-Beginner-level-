#include <stdio.h>

int main() {
 int n,i,f=0;
    printf("Enter a number-");
    scanf("%d",&n);
    if(i<=0)
    printf("Invalid");
    else
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
      printf("The number is a prime number");
    else
      printf("The number is not a prime number");
    }
    return 0;
}































 