/*Program for table*/
#include <stdio.h>

int main() 
{
    int n,i,p;
    printf("Enter the number-");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        p=n*i;
        printf("\n%d X %d=%d",n,i,p);
    }
    
    return 0;
}