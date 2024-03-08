#include <stdio.h>

main(){
    int First,Second;
    printf("First angle :");
    scanf("%d",&First);
    printf("Second angle :");
    scanf("%d",&Second);
    printf("Third angle :%d",180-First-Second);
}