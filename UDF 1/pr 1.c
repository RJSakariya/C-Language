#include <stdio.h>
void addNumbers(int n1 ,int n2){
    printf("sum of two numbers: %d\n",n1+n2);
}
void main(){
    int n1 , n2;
    printf("Enter any number: ");
    scanf("%d",&n1);
    printf("Enter any number: ");
    scanf("%d",&n2);
    addNumbers(n1,n2);
    main();
}   