#include <stdio.h>
main(){
    int l,j=0;
    printf("Enter any number :");
    scanf("%d",&l);
    for(int i=0;i<20;i++){
        if(l==0){
            break;
        }
        l/=10;
        j++;
    }
    printf("Total number of digits : %d",j);
}