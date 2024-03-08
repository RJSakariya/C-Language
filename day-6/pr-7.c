#include <stdio.h>

main(){
    int a;
    printf("Enter your marks:");
    scanf("%d",&a);

    if(a >=50){
        printf("Congratulations! You have passed the exam");
    }
    else{
        printf("Sorry! You failed the exam better luck next time");
    }
}