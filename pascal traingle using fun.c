#include <stdio.h>
int factorial(int x)
{
    int i,fact=1;{
    for(i=1;i<=x;i++)
    fact=fact*i;
        }
    return fact; 
}
int combination(int a,int b)
{
    int ncr=factorial(a)/(factorial(b)*factorial(a-b));
    return ncr;
}
int main()
{
    int a;
    printf("Enter n-");
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        for(int s=0;s<=a-i-1;s++){
        printf(" ");}
    {
        for(int j=0;j<=i;j++){
    int icj=combination(i,j);
    printf("%d ",icj);
}
printf("\n");
}
}
    return 0;
}