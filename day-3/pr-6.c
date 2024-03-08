#include <stdio.h>

main(){
    int first , second; 
    printf("Enter the first integer :");
    scanf("%d",&first);
    printf("Enter the second integer :");
    scanf("%d",&second);
    int third = first;
    first = second;
    second = third;
    printf("After swapping\n");
    printf("First integer : %d \n",first);
    printf("First integer : %d",second);
}