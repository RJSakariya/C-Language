#include <stdio.h>
int max(int *a , int *b) {
    if(*a > *b){
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
    printf("Maximum number is : %d \n",max(&a,&b));
    main();
}