#include <stdio.h>
int main() {
 int cost,qty,amnt,dis,gst,netamnt;
    printf("Enter the cost of the product-");
    scanf("%d",&cost);
    printf("Enter the quantity of the product-");
    scanf("%d",&qty);
    amnt=cost*qty;
    dis=10*amnt/100;
    gst=1000*8/100;
    netamnt=amnt-dis+gst;
    printf("\nThe amount is %d",amnt);
    printf("\nThe discount is %d",dis);
    printf("\nThe gst is %d",gst);
    printf("\nThe net amount is %d",netamnt);
    return 0;
}
  































 