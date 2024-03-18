#include <stdio.h>
main(){
    int i,j=0,k=1,l;
    printf("Enter any number:");
    scanf("%d",&i);
    for(int n=1;n<=i;n++){
        printf("%d, ",j);
        l = j+k;
        j = k;
        k = l;
    }
}