#include <stdio.h>
main(){
    int first,second,third;
    printf("Enter a value of the first number :");
    scanf("%d",&first);
    printf("Enter a value of the second number :");
    scanf("%d",&second);
    printf("Enter a value of the third number :");
    scanf("%d",&third);
    if(first < second && first < third){
        printf("The minimum value is : %d",first);
    }
    else if(second < third){
        printf("The miniimum value is : %d",second);
    }
    else{
        printf("The minimum value is : %d",third);
    }
}