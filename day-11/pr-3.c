#include <stdio.h>
main(){
    int n=2,i;
    printf("Enter any number:");
    scanf("%d",&i);
    do{
        printf("%d ",n);
        n+=2;    
    }while (n<=i);
}