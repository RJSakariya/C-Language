#include <stdio.h>
int min(int *a , int *b) {
    if(*a < *b){
        return *a;
    }
    else{
        return *b;
    }
}
void main() {
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Minimum number is : %d \n",min(&a,&b));
    main();
}