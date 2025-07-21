#include <stdio.h>
int main() {
 int n,d=0,a;
    printf("Enter a number-");
    scanf("%d",&n);
    a=n;
    while(n>0){
    n=n/10;
    d++;
    }
    printf("Number of digits in %d are %d",a,d);
    return 0;
}































 