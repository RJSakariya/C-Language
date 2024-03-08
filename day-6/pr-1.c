#include <stdio.h>

main(){
    int a,b;
    printf("Enter a First number:");
    scanf("%d",&a);
    printf("Enter a Second number:");
    scanf("%d",&b);

    if(a<b){
        printf("Minimum number is : %d",a);
    }
    else{
        printf("Minimum number is : %d",b);
    }
}
