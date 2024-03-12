#include <stdio.h>

main(){
    int a,b;
    printf("Enter a First number:");
    scanf("%d",&a);
    printf("Enter a Second number:");
    scanf("%d",&b);

    if(a<b){
        printf("maximum number is : %d",a);
    }
    else{
        printf("maximum number is : %d",b);
    }
}
