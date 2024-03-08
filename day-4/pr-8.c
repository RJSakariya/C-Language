#include <stdio.h>

main(){
    int n_1,n_2,n_3,n_4;
    printf("Enter first number :");
    scanf("%d",&n_1);
    printf("Enter second number :");
    scanf("%d",&n_2);
    printf("Enter third number :");
    scanf("%d",&n_3);
    printf("Enter fourth number :");
    scanf("%d",&n_4);
    printf("evaluates the expression of this (%d + %d) x (%d - %d) : %d",n_1,n_2,n_3,n_4,(n_1 + n_2) * (n_3 - n_4));
}