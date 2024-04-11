#include <stdio.h>
void swap(int *a , int *b) {
    int c = *a;
    *a = *b,*b = c;
    printf("After swapping: \nx : %d \n y : %d \n",*a,*b);
}
void main() {
    int a,b;
    printf("Enter value of x: ");
    scanf("%d", &a);
    printf("Enter value of y: ");
    scanf("%d", &b);
    printf("Before swapping: \nx : %d \n y : %d \n",a,b);
    swap(&a,&b);
    main();
}   