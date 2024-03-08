#include <stdio.h>

main(){
    int Principal, Rate, Time;
    printf("Enter Principal :");
    scanf("%d",&Principal);
    printf("Enter Rate :");
    scanf("%d",&Rate);
    printf("Enter Time :");
    scanf("%d",&Time);
    printf("Interest is : %d",(Principal*Rate*Time)/100);
}