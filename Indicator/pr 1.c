#include <stdio.h>
int cube(int *a) {
    return *a * *a * *a;
}
void main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Cube is : %d \n",cube(&a));
    main();
}