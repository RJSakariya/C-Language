#include <stdio.h>

main(){
    int first , second; 
    printf("Enter the first integer :");
    scanf("%d",&first);
    printf("Enter the second integer :");
    scanf("%d",&second);
    printf("Average of %d and %d is: %d",first , second,(first * second)/2);
}