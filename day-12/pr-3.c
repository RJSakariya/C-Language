#include <stdio.h>
main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}