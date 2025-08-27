#include <stdio.h>
int maze(int a,int b)
{
    int rightways=0;
    int downways=0;
    if(a==1 && b==1) return 1;
    if(a==1)
    {
        rightways += maze(a,b-1);
    }
    if(b==1)
    {
        downways += maze(a-1,b);
    }
    if(a>1 && b>1)
    {
        rightways += maze(a,b-1);
        downways += maze(a-1,b);
    }
    int totalways=rightways + downways;
    return totalways;
    
}
int main() {
    int a,b;
    printf("Enter the number of rows-");
    scanf("%d",&a);
    printf("Enter the number of columns-");
    scanf("%d",&b);
    int noofways=maze(a,b);
    printf("%d",noofways);
    return 0;
}