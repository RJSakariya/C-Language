#include <stdio.h>
main(){
    int first,second;
    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter second number : ");
    scanf("%d",&second);
    while ( first<=second){
        if (first%4 == 0)
        {
            printf("%d \t",first);
        }
        first++;    
    }
}