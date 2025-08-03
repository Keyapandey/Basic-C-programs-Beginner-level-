
#include <stdio.h>
int dec(int n)
{
    for(int i=n;i>=0;i--)
    printf("%d\n",i);
    return 0;
}
int main() {
    int n;
    printf("Enter the number-");
    scanf("%d",&n);
    int decreasing=dec(n);
    return 0;
}
}