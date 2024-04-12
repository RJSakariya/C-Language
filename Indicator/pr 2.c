#include <stdio.h>
void swap(int *a , int *b,int *c) {
    int d = *a;
    *a = *b,*b = *c,*c = d;
    printf("After swapping: \nx : %d \ny : %d \nz : %d\n",*a,*b,*c);
}
void main() {
    int a,b,c;
    printf("Enter value of x: ");
    scanf("%d", &a);
    printf("Enter value of y: ");
    scanf("%d", &b);
    printf("Enter value of z: ");
    scanf("%d", &c);
    printf("Before swapping: \nx : %d \ny : %d \nz : %d \n",a,b,c);
    swap(&a,&b,&c);
    main();
}   