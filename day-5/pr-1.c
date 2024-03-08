#include <stdio.h>

main(){
    int price,percentage;
    printf("Enter the original price :");
    scanf("%d",&price);
    printf("Enter the discount percentage :");
    scanf("%d",&percentage);
    printf("Discount amount : %d",(price*percentage)/100);
}