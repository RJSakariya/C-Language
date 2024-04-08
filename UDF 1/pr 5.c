#include <stdio.h>
void calculateSquare(int n1){
    printf("square of two numbers: %d\n",n1*n1);
}
void main(){
    int n1 , n2;
    printf("Enter any number: ");
    scanf("%d",&n1);
    calculateSquare(n1);
    main();
}   