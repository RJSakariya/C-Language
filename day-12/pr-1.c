#include <stdio.h>
main(){
    int n,l=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        l = l+i;
    }
    printf("The sum of all numbers: %d",l);
}