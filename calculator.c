#include <stdio.h>
int main() {
 int n1,n2,n3,yes,cal,res;
    printf("Enter the 1st number-");
    scanf("%d",&n1);
    printf("Enter the 2nd number-");
    scanf("%d",&n2);
    printf("\nDo you want to add another number if yes press 1 and 0 for no\n");
    scanf("%d",&yes);
    if(yes==1)
    {
        printf("Enter the 3rd number-");
        scanf("%d",&n3);
    }
    else
    printf("\n Proceeding to the calculations");
    printf("\n Press 1 for addition\n Press 2 for subtraction\n Press 3 for multiplication\n Press 4 for division\n");
    printf("\nEnter your choice-\n");
    scanf("%d",&cal);
    switch(cal)
    {
        case 1:
        res=n1+n2+n3;
        printf("The addition is %d",res);
        break;
        case 2:
        res=n1-n2-n3;
        printf("The difference is %d",res);
        break;
        case 3:
        res=n1*n2;
        if(yes==1)
        {
            res*=n3;
        printf("The multiplication is %d",res);
        }
        break;
        case 4:
       
        if(n2==0 || (yes==1 && n3==0))
        {
            printf("The division is not possible");
        }
        res=n1/n2;
        if(yes==1)
        {
            res/=n3;
        }
        printf("The division is %d",res);
        break;
        default:
        printf("Invalid");
    }
    return 0;
}































 