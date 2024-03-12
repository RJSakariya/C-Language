#include <stdio.h>
main(){
    int first,second,third,fourth;
    printf("Enter a value of the first number :");
    scanf("%d",&first);
    printf("Enter a value of the second number :");
    scanf("%d",&second);
    printf("Enter a value of the third number :");
    scanf("%d",&third);
    printf("Enter a value of the fourth number :");
    scanf("%d",&fourth);
    if(first > second && first > third && first > fourth){
        printf("The maximum value is : %d",first);
    }
    else if(second > third && second > fourth){
        printf("The maximum value is : %d",second);
    }
    else if(third > fourth){
        printf("The maximum value is : %d",second);
    }
    else{
        printf("The maximum value is : %d",fourth);
    }
}